/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pac-man <pac-man@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 11:25:52 by taeskim           #+#    #+#             */
/*   Updated: 2021/08/27 14:08:43 by pac-man          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shared.h"

int	ft_strlen(char *s)
{
	int	len;

	len = 0;
	if (!s || !*s)
		return (0);
	while (s[len])
		len++;
	return (len);
}
