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
	memset(gamedata->key_release, 0, sizeof(gamedata->key_release)); // TODO pas oublier dimport ft_memset
	t_list *object_list = NULL;
	
	
	ft_lstadd_back(&object_list, ft_lstnew(create_new_object((t_vector2){0, 0}, (t_vector2){10, 10},(t_vector2){100, 100}, SHAPE_RECTANGLE)));
	ft_lstadd_back(&object_list, ft_lstnew(create_new_object((t_vector2){0, 0}, (t_vector2){100, 10},(t_vector2){100, 100}, SHAPE_RECTANGLE)));
	ft_lstadd_back(&object_list, ft_lstnew(create_new_object((t_vector2){210, 0}, (t_vector2){0, 0},(t_vector2){100, 100}, SHAPE_PLAYER)));
	
	
	gamedata->mlx = mlx_init();
	gamedata->win = mlx_new_window(gamedata->mlx, SCREEN_SIZEX, SCREEN_SIZEY, "so_long");
	gamedata->buffer = t_new_image(gamedata->mlx, SCREEN_SIZEX, SCREEN_SIZEY);
	gamedata->objects = object_list;
	gamedata->win_height = SCREEN_SIZEY;
	gamedata->win_width = SCREEN_SIZEX;
	printf("%p\n", gamedata->objects);
	mlx_hook(gamedata->win, 2, 1L<<1, key_press, gamedata); //Hooks
	mlx_hook(gamedata->win, 3, 1L<<0, key_rel, gamedata);
}

