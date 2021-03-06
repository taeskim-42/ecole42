/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgang <sgang@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 20:09:45 by sgang             #+#    #+#             */
/*   Updated: 2022/01/04 13:12:06 by sgang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "util/util.h"
#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <stdlib.h>
#include <readline/readline.h>
#include <readline/history.h>

#define RET_ERROR		-1
#define DP_FILE			1
#define DP_CMD			3
#define	DP_ARG			5
#define DP_SEPARATE		8
#define DP_PIPE			16
#define DP_L_REDIRECT	32
#define DP_LL_REDIRECT	34
#define DP_R_REDIRECT	64
#define DP_RR_REDIRECT	66
#define TOKEN	";|<>"
#define QUTOES	"\'\""

typedef struct		s_cmd
{
	char	*cmd;
	t_slist	*args;
}	t_cmd;

typedef struct		s_env
{
	char			*env;
	char			*key;
	char			*val;
}	t_env;

typedef struct		s_token
{
	int				type;
	char			*val;
}	t_token;

typedef struct		s_ast
{
	int				type;
	void			*data;
	struct s_ast	*left;
	struct s_ast	*right;
}	t_ast;


// env
void	env_unset(t_dnode *node, char *key);
t_env	*env_set(t_env *node, char *env);
t_dnode	*env_get(t_dnode *iter, char *key);
t_dlist	*env_init(char **envp);

// parse
int		syntax(t_dlist *list, t_slist *ast);
int		parser(t_dlist *list, t_slist *ast, char *str);

// main.c
void	ft_space_skip(char **str);
int		ft_strchr(char *charset, char ch);
////////////////////////////////////////////////
