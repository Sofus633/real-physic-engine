
#ifndef OBJECT_H
# define OBJECT_H

#include "../images_mlx/images.h"
#include "../vectors/vector.h"
#include "../llist/ft_list.h"

#define W 'w'
#define S 's'
#define D 'd'
#define A 'a'
#define SPACE ' '
#define E 'e'



#define FRICTION 0.94

typedef struct s_game
{
  void    *mlx;
  void    *win;
  int     win_height;
  int     win_width;
  t_image *buffer;
  t_list *objects;
	int key_release[256];
} t_game;

typedef enum {
    SHAPE_PLAYER,
    SHAPE_RECTANGLE
} t_shape_type;

typedef struct s_object{
	t_vector2		pos;
  t_vector2		velocity;
  t_vector2		size;
	t_shape_type	type;	
  void	(*update_object)(struct s_object *object, t_game *gamedata);
  void	(*display_object)(struct s_object object, t_image *buffer);
} t_object;

t_object *create_new_object(t_vector2 pos, t_vector2 vel,t_vector2 size, int shape_type);


#endif
