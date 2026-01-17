
#ifndef VECTOR_H
# define VECTOR_H

#include <math.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct s_vector
{
  double  x;
  double  y;
} t_vector2;


t_vector2 div_vector2(t_vector2 v1, t_vector2 v2);
t_vector2 mul_vector2(t_vector2 v1, t_vector2 v2);
t_vector2 add_vector2(t_vector2 v1, t_vector2 v2);
t_vector2 sub_vector2(t_vector2 v1, t_vector2 v2);
#endif
