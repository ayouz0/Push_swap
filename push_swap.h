/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitabde <aaitabde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 16:33:01 by aaitabde          #+#    #+#             */
/*   Updated: 2024/12/29 21:34:18 by aaitabde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H
#endif


#include <stdio.h>


#include <limits.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct s_stack{
	int				val;
	struct s_stack	*next;
} t_stack;

char	**ft_split(char const *s, char c);
char	**join_args(char **argv);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strdup(const char *s1);
size_t	ft_strlen(const char *s);
int		parse_input(char **nums);
void	get_out();
void	prerror();