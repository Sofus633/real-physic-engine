
#ifndef IMAGES_H
# define IMAGES_H

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

#endif