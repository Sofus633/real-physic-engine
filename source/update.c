/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cascrizz <cascrizz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 00:13:51 by cascrizz          #+#    #+#             */
/*   Updated: 2026/01/18 19:55:56 by cascrizz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libg.h"

void update(t_game *gamedata)
{
	t_list *lst = gamedata->objects;
  while (lst != NULL)
	{
		((t_object *)(lst->content))->update_object(((t_object *)(lst->content)), gamedata);
		lst = lst->next;
	}
}

void display(t_game *gamedata)
{

  clear_image(gamedata->buffer); 
  t_list *lst = gamedata->objects;
  while (lst != NULL)
	{
		((t_object *)(lst->content))->display_object((*(t_object *)(lst->content)), gamedata->buffer);
		lst = lst->next;
	}
	mlx_put_image_to_window(gamedata->mlx, gamedata->win, gamedata->buffer->img, 0, 0);
}
