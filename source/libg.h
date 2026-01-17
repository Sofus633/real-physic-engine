/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libg.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cascrizz <cascrizz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 00:13:38 by cascrizz          #+#    #+#             */
/*   Updated: 2026/01/16 00:50:51 by cascrizz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBG_G
# define LIBG_G

#define SCREEN_SIZEX 1000
#define SCREEN_SIZEY 800

#include <stddef.h>
# include "../libs/mlx_linux/mlx.h"
#include "../libs/llist/ft_list.h"
#include "../libs/images_mlx/images.h"
#include "../libs/shapes_mlx/shapes.h"
#include <sys/time.h>

typedef struct s_game
{
  void *mlx;
  void *win;
  t_image *buffer;
  t_list *objects;
} t_game;

void set_default_gamedata(t_game *gamedata);
void update(t_game *gamedata);
void display(t_game *gamedata);

#endif

