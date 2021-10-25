/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pac-man <pac-man@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 13:06:36 by pac-man           #+#    #+#             */
/*   Updated: 2021/10/24 12:26:10 by pac-man          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/philo.h"

int main(int argc, char **argv)
{
	// t_op op;

	(void)argc;
	(void)argv;
	// ft_memset(&op, 0, sizeof(op))
	pid_t pid;
	pid = fork();
	if (pid == 0)
	{
		printf("✅this is child %d\n", pid);
	}
	else
	{
		printf("✅this is parent %d\n", pid);
	}
	return (0);
}