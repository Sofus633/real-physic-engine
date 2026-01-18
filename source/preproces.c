/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   preproces.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cascrizz <cascrizz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 00:13:48 by cascrizz          #+#    #+#             */
/*   Updated: 2026/01/18 20:04:08 by cascrizz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libg.h"

void set_default_gamedata(t_game *gamedata)
{
	t_list *object_list = NULL;
	ft_lstadd_back(&object_list, ft_lstnew(create_new_object((t_vector2){100, 10}, (t_vector2){100, 100}, SHAPE_RECTANGLE)));
	ft_lstadd_back(&object_list, ft_lstnew(create_new_object((t_vector2){200, 10}, (t_vector2){100, 100}, SHAPE_RECTANGLE)));
	ft_lstadd_back(&object_list, ft_lstnew(create_new_object((t_vector2){600, 10}, (t_vector2){100, 100}, SHAPE_RECTANGLE)));
	ft_lstadd_back(&object_list, ft_lstnew(create_new_object((t_vector2){100, 100}, (t_vector2){100, 100}, SHAPE_RECTANGLE)));
	gamedata->mlx = mlx_init();
	gamedata->win = mlx_new_window(gamedata->mlx, SCREEN_SIZEX, SCREEN_SIZEY, "so_long");
	gamedata->buffer = t_new_image(gamedata->mlx, SCREEN_SIZEX, SCREEN_SIZEY);
	gamedata->objects = object_list;
	printf("%p\n", gamedata->objects);
}
