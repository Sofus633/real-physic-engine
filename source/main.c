/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cascrizz <cascrizz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 00:13:30 by cascrizz          #+#    #+#             */
/*   Updated: 2026/01/21 17:50:07 by cascrizz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libg.h"

int loop(t_game *gamedata)
{
	struct timeval tv;
	static int wait;
	static long int end; 
	gettimeofday(&tv, NULL);
	long long current_time_us;
	current_time_us = (long long)tv.tv_sec * 1000000 + tv.tv_usec;


	if (!wait)
	{
		wait = 1;
		end = current_time_us + (1000000 / 60); 
	}
	if (current_time_us > end)
	{
		wait = 0;
		update(gamedata);
		display(gamedata);
	}
	return (1);
}

int main()
{
	t_game gamedata;
	set_default_gamedata(&gamedata);
	mlx_loop_hook(gamedata.mlx , &loop, &gamedata);
	mlx_loop(gamedata.mlx);
}
