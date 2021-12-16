/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_slicer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pacman <pacman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:58:44 by pac-man           #+#    #+#             */
/*   Updated: 2021/12/16 11:01:23 by pacman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/pipex.h"

void	str_slicer(t_arg *t, char *s)
{
	int	i;
	int	to;
	int	from;
	int	index;

	i = -1;
	to = -1;
	from = 5;
	index = -1;
	while (++i < t->count)
	{
		while (s[++to])
		{
			if (s[to] == ':' && i == ++index)
			{
				t->path[i] = substr(s, from, to);
				break ;
			}
		}
		from = to + 1;
		index = -1;
		to = -1;
	}
}
