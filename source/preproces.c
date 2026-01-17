/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   preproces.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cascrizz <cascrizz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 00:13:48 by cascrizz          #+#    #+#             */
/*   Updated: 2026/01/16 00:58:45 by cascrizz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libg.h"

void set_default_gamedata(t_game *gamedata)
{	

	t_rect rec0 = {0, 0, 100, 100, &draw_rect};

	gamedata->mlx = mlx_init();
	gamedata->win = mlx_new_window(gamedata->mlx, SCREEN_SIZEX, SCREEN_SIZEY, "so_long");
	gamedata->buffer = t_new_image(gamedata->mlx, SCREEN_SIZEX, SCREEN_SIZEY);
	gamedata->objects = ft_lstnew(&rec0);
}
