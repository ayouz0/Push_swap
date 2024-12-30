/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_operations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitabde <aaitabde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 21:04:56 by aaitabde          #+#    #+#             */
/*   Updated: 2024/12/30 21:47:30 by aaitabde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sa(t_stack **a)
{
	t_stack	*first;
	t_stack *second;

	if (*a && (*a)->next)
	{
		first = *a;
		second = first->next;
		first->next = second->next;
		second->next = first;
		*a = second;
	}
	write (1, "sa\n", 3);
}

void sb(t_stack **b)
{
	t_stack	*first;
	t_stack *second;

	if (*b && (*b)->next)
	{
		first = *b;
		second = first->next;
		first->next = second->next;
		second->next = first;
		*b = second;
		write (1, "sb\n", 3);
	}
}
void ss(t_stack **a, t_stack **b)
{
	sa(a);
	sb(b);
}