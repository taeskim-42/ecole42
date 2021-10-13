/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pac-man <pac-man@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 23:05:44 by pac-man           #+#    #+#             */
/*   Updated: 2021/10/14 00:56:57 by pac-man          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/shared.h"

void	map_finder(int argc, char **argv)
{
	(void)argc;
	(void)argv;
}

int	main(int argc, char **argv)
{
	t_game	g;
	t_map	m;

	game_init(&g, &m);
	map_finder(argc, argv);
	map_frame_setter(g.m);
	map_validator(g.m);
	map_maker(&g);
	mlx_hook(g.m->win, 2, 1L << 0, ft_keypress, &g);
	mlx_loop_hook(g.m->mlx, map_maker, &g);
	mlx_loop(g.m->mlx);
	return (0);
}
