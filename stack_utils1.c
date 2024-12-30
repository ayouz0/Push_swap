/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitabde <aaitabde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 14:34:47 by aaitabde          #+#    #+#             */
/*   Updated: 2024/12/30 21:53:30 by aaitabde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void print_stack(t_stack **a)
{
	t_stack	*tmp;

	tmp = *a;
	while (tmp)
	{
		printf("%d\n",tmp->val);
		tmp = tmp->next;
	}
}

void free_stack(t_stack **a)
{
	t_stack *tmp;

	tmp = *a;
	while (tmp)
	{
		free(tmp);
		tmp = tmp->next;
	}
}
t_stack	*newlst(int val)
{
	t_stack	*lstnew;

	lstnew = (t_stack *)malloc(sizeof(t_stack));
	if (!lstnew)
		return (NULL);
	lstnew->val = val;
	lstnew->next = NULL;
	return (lstnew);
}

void	lstadd_front(t_stack **lst, t_stack *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
