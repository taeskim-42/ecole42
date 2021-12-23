/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_slicer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pacman <pacman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:58:44 by pac-man           #+#    #+#             */
/*   Updated: 2021/12/23 14:56:20 by pacman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/pipex.h"

void	str_slicer(t_arg *t, char *s, int count)
{
	int		i;
	int		to;
	int		from;
	int		index;
	char	*tmp;

	i = -1;
	to = -1;
	from = 5;
	index = -1;
	while (++i < count)
	{
		while (s[++to])
		{
			if (s[to] == ':' && i == ++index)
			{
				tmp = substr(s, from, to);
				t->path[i] = ft_strjoin(tmp, "/");
				if (tmp)
					free_p(tmp);
				break ;
			}
		}
		from = to + 1;
		index = -1;
		to = -1;
	}
}
