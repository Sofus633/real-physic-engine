
#ifndef OBJECT_H
# define OBJECT_H

#include "../images_mlx/images.h"
#include "../vectors/vector.h"

typedef enum {
    SHAPE_CIRCLE,
    SHAPE_RECTANGLE
} t_shape_type;

typedef struct s_object{
	t_vector2		pos;
	t_vector2		size;
	t_shape_type	type;
	void	(*display_object)(struct s_object object, t_image *buffer);
} t_object;

t_object *create_new_object(t_vector2 pos, t_vector2 size, int shape_type);

#endif