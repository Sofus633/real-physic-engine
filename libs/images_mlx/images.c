/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   images.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cascrizz <cascrizz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 00:13:56 by cascrizz          #+#    #+#             */
/*   Updated: 2026/01/16 00:25:18 by cascrizz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "imqges.h"

void	my_mlx_pixel_put(image *image, int x, int y, int color)
{
	char	*dst;
	dst = image->data + (y * image->size_line + x * (image->bpp / 8));
	*(unsigned int*)dst = color;
}

char	*my_mlx_pixel_get(image *image, int x, int y)
{
	char	*dst;

	dst = image->data + (y * image->size_line + x * (image->bpp / 8));
	return (dst);
}


t_image *t_new_image(void *mlx, int x, int y)
{
  t_image *nimg = malloc(sizeof(t_image));
  nimg->img = mlx_new_image(mlx, x, y);
  nimg->height = x;
  nimg->width = y;
  nimg->data = mlx_get_data_addr(nimg->img, &nimg->bpp, &nimg->size_line, &nimg->endian);
  return (nimg);
}

