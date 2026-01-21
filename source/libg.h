/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libg.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cascrizz <cascrizz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 00:13:38 by cascrizz          #+#    #+#             */
/*   Updated: 2026/01/18 19:51:53 by cascrizz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBG_G
# define LIBG_G

#define SCREEN_SIZEX 1000
#define SCREEN_SIZEY 800

#include <stddef.h>
#include "../libs/llist/ft_list.h"
#include "../libs/images_mlx/images.h"
#include "../libs/object_mlx/objects.h"
#include <sys/time.h>
#include <stdio.h>//TO REMOVE

void set_default_gamedata(t_game *gamedata);
void update(t_game *gamedata);
void display(t_game *gamedata);
void get_pressed(t_game *param);
int key_press(int key_code, void *param);
int key_rel(int key_code, void *param);
#endif

