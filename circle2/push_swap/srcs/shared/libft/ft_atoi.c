/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pac-man <pac-man@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 10:11:38 by taeskim           #+#    #+#             */
/*   Updated: 2021/08/27 14:07:51 by pac-man          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shared.h"

long long	ft_atoi(const char *src)
{
	long long	sign;
	long long	num;

	sign = 1;
	num = 0;
	while (*src == ' ' || (*src >= '\t' && *src <= '\r'))
		src++;
	if (*src == '+' || *src == '-')
	{
		if (*src == '-')
			sign = -1;
		src++;
	}
	while (*src >= '0' && *src <= '9')
	{
		num = (num * 10) + (*src - '0');
		src++;
	}
	return (sign * num);
}
