/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaitabde <aaitabde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 15:36:09 by aaitabde          #+#    #+#             */
/*   Updated: 2024/12/29 22:37:01 by aaitabde         ###   ########.fr       */
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
	char **nums;

	if (ac == 1)   
		return (0);
	if (ac > 1 && !inpt[1][0])
		prerror();
	// printf("%s\n",inpt[1]);
	basic_checks(inpt);
	nums = join_args(inpt);
	if (parse_input(nums) == 0)
		get_out(nums);
}