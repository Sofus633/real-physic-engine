
#ifndef IMAGES_H
# define IMAGES_H

# include "../mlx_linux/mlx.h"
#include <stdlib.h>

typedef struct s_image
{
	void	*img;
	char	*data;
	int		width;
	int		height;
	int		bpp;
	int		size_line;
	int		endian;
}	t_image;

t_image *t_new_image(void *mlx, int x, int y);
char	*my_mlx_pixel_get(t_image *image, int x, int y);
void	my_mlx_pixel_put(t_image *image, int x, int y, int color);


#endif