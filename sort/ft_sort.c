/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:56:01 by abasarud          #+#    #+#             */
/*   Updated: 2022/09/15 11:56:05 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_small_sort(int argc, t_stack **stack_a, t_stack **stack_b)
/* will determine which small_sort function to call */
{
	if (argc == 2)
	{
		if ((*stack_a)->content > (*stack_a)->next->content)
			ft_sa(stack_a, 1);
	}
	else if (argc == 3)
		ft_sort_three(stack_a);
	else if (argc == 4)
		ft_sort_four(stack_a, stack_b);
	else if (argc == 5)
		ft_sort_five(stack_a, stack_b);
}

void	ft_sort(int argc, t_stack **stack_a, t_stack **stack_b)
/* will determine if small_sort or big_sort is to be called */
{
	if (argc <= 5)
		ft_small_sort(argc, stack_a, stack_b);
	else if (argc <= 100)
		ft_big_sort(argc, stack_a, stack_b);
	else
		ft_big_big_sort(argc, stack_a, stack_b);
}
