#include "objects.h"

void	draw_rect(t_object obj, t_image *buffer)
{
	double	x;
	double	y;
	x = obj.pos.x;
	y = obj.pos.y;
	printf("Displaying x%f y%f to x%f y%f\n", x, y, obj.size.x, obj.size.y);
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

t_object *create_new_object(t_vector2 pos, t_vector2 size, int shape_type)
{
	t_object *new_obj;

	new_obj = malloc(sizeof(t_object));
	new_obj->pos = pos;
	new_obj->size = size;
	new_obj->type = shape_type;
	if (shape_type == SHAPE_RECTANGLE)
	{
		new_obj->display_object = &draw_rect;
	}
	return (new_obj);
}
