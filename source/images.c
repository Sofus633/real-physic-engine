#include "libg.h"

t_image *t_new_image(void *mlx, int x, int y)
{
  t_image *nimg = malloc(sizeof(t_image));
  nimg->img = mlx_new_image(mlx, x, y);
  nimg->height = x;
  nimg->width = y;
  nimg->data = mlx_get_data_addr(nimg->img, &nimg->bpp, &nimg->size_line, &nimg->endian);
  return (nimg);
}

