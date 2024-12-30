/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitabde <aaitabde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 11:48:22 by aaitabde          #+#    #+#             */
/*   Updated: 2024/12/30 21:53:39 by aaitabde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	nums(int *i, long long *result, int *isng)
{
	*i = 0;
	*result = 0;
	*isng = 1;
}


long	ft_atoi(const char *str)
{
	int			i;
	long long	result;
	int			isng;

	nums(&i, &result, &isng);
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			isng *= -1;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (result > (INT_MAX / 10)
			|| (result == (INT_MAX / 10) && str[i] - '0' > INT_MAX % 10))
		{
			result = (result * 10) + (str[i] - '0');
			return (isng * result);
		}
		result = (result * 10) + (str[i++] - '0');
	}
	return (result * isng);
}

int check_dups(t_stack **a, int val)
{
	t_stack *tmp;

	tmp = *a;
	while (tmp)
	{
		if (tmp->val == val)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

int	init_stack_a(int ac, t_stack **a, char **nums)
{
	long	val;
	t_stack *new_node;

	while (ac >= 0)
	{
		val = ft_atoi(nums[ac]);
		if (val > INT_MAX || val < INT_MIN)
			return (0);
		if (check_dups(a, val) == 0)
			return (0);
		if (*a == NULL)
			*a = newlst(val);
		else
		{
			new_node = newlst(val);
			lstadd_front(a,new_node);
		}
		ac--;
	}
	return(1);
}
