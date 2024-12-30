/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitabde <aaitabde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 15:36:09 by aaitabde          #+#    #+#             */
/*   Updated: 2024/12/30 23:25:28 by aaitabde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int empty(char *num)
{
	int i;
	
	i = 0;
	while (num[i] != '\0')
	{
		if (num[i] != ' ')
			return(0);
		i++;
	}
	return (1);
}

int count_args(char **nums)
{
	int count;

	count = 0;
	while (nums[count])
		count++;
	return (count);
}

void basic_checks(char **nums)
{
	int i;

	i = 0;
	while (nums[i])
	{
		if (nums[i][0] == '\0')
			prerror();
		if (empty(nums[i]))
			prerror();
		i++;
	}
}

int main(int ac,char *inpt[])
{
	char	**nums;
	t_stack *a;
	// t_stack *b;

	a = NULL;
	if (ac == 1)   
		return (0);
	if (ac > 1 && !inpt[1][0])
		prerror();
	basic_checks(inpt);
	nums = join_args(inpt);
	if (parse_input(nums) == 0)
		get_out(nums);
	// int i =0;
	// while (nums[i])
	// {
	// 	printf("%s\n", nums[i++]);
	// }
	ac = count_args(nums) -1;
	// printf("%d\n\n",ac);
	if (init_stack_a(ac, &a, nums) == 0)
	{
		free_stack(&a);
		get_out(nums);
	}
	if (sorted(&a))
		print_stack(&a);
	// 	ft_sort(&a, &b);
	free_stack(&a);
}
