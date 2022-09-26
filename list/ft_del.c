/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_del.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:53:57 by abasarud          #+#    #+#             */
/*   Updated: 2022/09/15 11:54:01 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_del_top(t_stack **stack)
/* will free the first element of the linked list
** second element will be the new first */
{
	t_stack	*temp;

	temp = (*stack)->next;
	free(*stack);
	*stack = temp;
}

void	ft_del_larger_x(t_stack **stack, float x)
/* will delete every element of the stack larger than x */
{
	while ((*stack)->flag != 1)
	{
		if ((*stack)->content > x)
			ft_del_top(stack);
		else
		{
			(*stack)->flag = 1;
			ft_ra(stack, 0);
		}
	}
	ft_set_flag(stack, 0);
}

void	ft_del_smaller_x(t_stack **stack, float x)
/* will delete every element of the stack smaller than x */
{
	while ((*stack)->flag != 1)
	{
		if ((*stack)->content < x)
			ft_del_top(stack);
		else
		{
			(*stack)->flag = 1;
			ft_ra(stack, 0);
		}
	}
	ft_set_flag(stack, 0);
}
