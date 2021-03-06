/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pac-man <pac-man@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 13:32:41 by taeskim           #+#    #+#             */
/*   Updated: 2021/08/27 14:08:13 by pac-man          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shared.h"

int	ft_isdigit(char c)
{
	return (c >= '0' && c <= '9');
}
