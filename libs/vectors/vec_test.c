#include <stdio.h>
#include <assert.h>
#include "vector.h"

void debug_vector2(t_vector2 vec)
{
  printf("vector :{x=%f, y=%f}\n", vec.x, vec.y);
}

int equal_vector2(t_vector2 v1, t_vector2 v2)
{
  printf("comparing : vec2(%f, %f) with vec(%f, %f)\n", v1.x, v1.y, v2.x, v2.y);
  return (v1.x == v2.x && v1.y == v2.y);
}

int main(void)
{
  printf("unitary testing the vector2 lib : \n\n");

  t_vector2 vec0 = {0, 0};
  t_vector2 vec1 = {1, 1};
  t_vector2 vec2 = {5, 5};

  printf("Testing + and - :\n")
  assert(equal_vector2(add_vector2(vec0, vec1), (t_vector2){1, 1}));
  assert(equal_vector2(sub_vector2(vec0, vec1), (t_vector2){-1, -1}));
  assert(equal_vector2(sub_vector2(vec1, vec5), (t_vector2){4, 4}));
  
  printf("Testing / and *\n");

  assert(equal_vector2(mul_vector2(vec0, vec1), (t_vector2){0, 0}));
  assert(equal_vector2(mul_vector2(vec1, vec5), (t_vector2){5, 5}));
  assert(equal_vector2(div_vector2(vec0, vec1), (t_vector2){0, 0}));
  
  printf("Test divition by 0\n");
  try {
    div_vector2(vec1, vec0)
  }
  catch{
    printf("Division by 0 error\n");
  }

  printf("\nall good\n");
}
