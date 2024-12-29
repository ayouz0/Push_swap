/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitabde <aaitabde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 16:06:06 by aaitabde          #+#    #+#             */
/*   Updated: 2024/12/29 22:22:07 by aaitabde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void prerror()
{
	write (2, "Error\n", 6);
	exit(1);
}

int digit_syntax(char *nums)
{
	int i;
	
	i = 1;
	if (!(((nums[0] == '-' || nums[0] == '+') && (nums[1] >= '0' && nums[1] <= '9')) || (nums[0] >= '0' && nums[0] <= '9')))
		return(0);
	while (nums[i])
	{
		if (!(nums[i] >= '0' && nums[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

int	all_good(char *nums)
{
	int i;

	i = 0;
	
	while (nums[i])
	{
		if (digit_syntax(nums) == 0)
			return (0);
		i++;
	}
	return (1);
}

void free_array(char **input)
{
	int i;

	i = 0;
	while (input[i])
		free(input[i++]);
	free(input);
}

void get_out(char **nums)
{
	free_array(nums);
	prerror();
}

int parse_input(char **nums)
{
	int i;

	i = 0;
	while (nums[i])
	{
		if (!all_good(nums[i]))
			return (0);
		i++;
	}
	return (1);
}