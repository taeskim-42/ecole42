/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pacman <pacman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 00:57:56 by pac-man           #+#    #+#             */
/*   Updated: 2021/12/17 01:45:23 by pacman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <stdbool.h>
# include <fcntl.h>
# include <unistd.h>
# include <string.h>
# include <errno.h>
# include <stdlib.h>
# include <sys/wait.h>
# include <stdio.h>
# include <errno.h>

// =============================================================================
// STRUCT
// =============================================================================

typedef struct s_arg
{
	int		count;
	char	**path;
	char	**command;
	int		pipe[2];
	int		pipe_last[2];
}			t_arg;

// =============================================================================
// LIBFT
// =============================================================================

size_t	ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memset(void *s, int c, size_t n);
void	ft_putstr_fd(char *s, int fd);
size_t	ft_strlen(char *s);
bool	ft_calloc(void **ptr, size_t cnt, size_t n);
char	*ft_strdup(char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

// =============================================================================
// UTILS
// =============================================================================

size_t	char_frequency(char *s, char c);
void	arg_init(t_arg *t, char **envp, char **argv, int argc);
char	*substr(char *s, int from, int to);
void	str_slicer(t_arg *t, char *s);
void	t_arg_init(t_arg *t);
void	pipe_process(t_arg *t);

#endif