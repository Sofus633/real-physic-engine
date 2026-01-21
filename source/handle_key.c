
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_keys.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cascrizz <cascrizz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 13:18:19 by cascrizz          #+#    #+#             */
/*   Updated: 2026/01/10 13:18:21 by cascrizz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libg.h"

/*void get_pressed(t_game *param)
{
 	t_game *p = (t_game *)param;
	if (p->key_release[W] == 1)
  {
    p->player->vel.y -= .5; 
	}
	if (p->key_release[S])
  {
    p->player->vel.y += .5; 
	}
	if (p->key_release[D])
  {
    p->player->vel.x += .5; 
	}
	if (p->key_release[A])
  {
		p->player->vel.x -= .5;
  }
  if (p->key_release[SPACE]){
    p->player->speed = 1.5;
  }
}*/

int key_press(int key_code, void *param)
{
	t_game *p = (t_game *)param;
	if (key_code == W){  // z
		p->key_release[W] = 1;
	}
		if (key_code == S){
		p->key_release[S] = 1;
	}
		if (key_code == A){
		p->key_release[A] = 1;
	}
		if (key_code == D){
		p->key_release[D] = 1;
	}
  	if (key_code == SPACE){
    	p->key_release[SPACE] = 1;
  	}
    if (key_code == E){
    	p->key_release[E] = 1;
  	}
	return 1;
}

int key_rel(int key_code, void *param)
{
	t_game *p = (t_game *)param;
	if (key_code == W)
		p->key_release[W] = 0;
	if (key_code == S)
		p->key_release[S] = 0;
	if (key_code == A)
	  p->key_release[A] = 0;
	if (key_code == D)
		p->key_release[D] = 0;
	if (key_code == E)
    	p->key_release[E] = 0;
  if (key_code == SPACE){
    p->key_release[SPACE] = 0;
  }
}
