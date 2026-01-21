#include "objects.h"

void	draw_rect(t_object obj, t_image *buffer)
{
	double	x;
	double	y;
	x = obj.pos.x;
	y = obj.pos.y;
	while (y < obj.pos.y + obj.size.y)
	{
		while (x < obj.pos.x + obj.size.x)
		{
			my_mlx_pixel_put(buffer, x, y, 0x00FF000);
			x++;
		}
		x = obj.pos.x;
		y++;
	}
}

void update_obj(t_object *obj, t_game *gamedata)
{
  t_vector2 new_pos;

  new_pos = add_vector2(obj->pos, obj->velocity);
  
  if (new_pos.x < 0 || new_pos.x > gamedata->win_width - obj->size.x)
  {
    new_pos.x = obj->pos.x;
  }
  if (new_pos.y < 0 || new_pos.y > gamedata->win_height - obj->size.y)
  {
    new_pos.y = obj->pos.y;
  }

  obj->velocity = scal_mul_vector2(obj->velocity, FRICTION);
  obj->pos = new_pos;
}

void update_player(t_object *obj, t_game *gamedata)
{
  if (gamedata->key_release[D])
    obj->velocity.x += 1;
  if (gamedata->key_release[A])
    obj->velocity.x -= 1;
  if (gamedata->key_release[S])
    obj->velocity.y += 1;
  if (gamedata->key_release[W])
    obj->velocity.y -= 1;
  update_obj(obj, gamedata);
}

t_object *create_new_object(t_vector2 pos, t_vector2 vel,t_vector2 size, int shape_type)
{
	t_object *new_obj;

	new_obj = malloc(sizeof(t_object));
	new_obj->pos = pos;
  new_obj->velocity = vel;
	new_obj->size = size;
	new_obj->type = shape_type;
	if (shape_type == SHAPE_RECTANGLE)
	{
		new_obj->display_object = &draw_rect;
    new_obj->update_object = &update_obj;
  }
	if (shape_type == SHAPE_PLAYER)
	{
		new_obj->display_object = &draw_rect;
    new_obj->update_object = &update_player;
  }
	return (new_obj);
}

t_object *free_object(t_object *obj)
{
	t_object *new_obj;

	free(obj);
}
