/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitabde <aaitabde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 21:59:03 by aaitabde          #+#    #+#             */
/*   Updated: 2024/12/30 22:55:49 by aaitabde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int sorted(t_stack **a)
{
	t_stack	*curr;

	curr = *a;
	while (curr->next)
	{
		if (curr->val > curr->next->val)
			return (0);
		curr = curr->next;
	}
	return(1);
}

// int