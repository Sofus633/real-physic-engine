/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shapes.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cascrizz <cascrizz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 00:34:27 by cascrizz          #+#    #+#             */
/*   Updated: 2026/01/16 00:34:27 by cascrizz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHAPES_H
# define SHAPES_H

#include "../images_mlx/images.h"

typedef struct s_rect{
	int		x;
	int		y;
	int		height;
	int		width;
	void	(*display_object)(struct s_rect rect, t_image buffer);
} t_rect;

void	draw_rect(t_rect rect, t_image buffer);

#endif