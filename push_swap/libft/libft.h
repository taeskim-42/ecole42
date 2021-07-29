/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pac-man <pac-man@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 13:33:23 by taeskim           #+#    #+#             */
/*   Updated: 2021/07/27 02:09:38 by pac-man          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H
#include <stdio.h>
#include <stdlib.h>

int ft_isdigit(char c);
long long ft_atoi(const char *src);
int ft_strlen(char *s);
void *ft_memset(void *b, int c, int len);
void *ft_calloc(size_t count, size_t size);
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);
char *ft_strdup(char *s);

#endif