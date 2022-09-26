/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 11:44:56 by abasarud          #+#    #+#             */
/*   Updated: 2022/09/14 11:45:01 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sb(t_stack **stack_b, int flag)
/* swap the first two elements on top of stack b
** do nothing if only one or no elements on stack */
{
	t_stack	*temp;

	if (stack_b && (*stack_b)->next != NULL)
	{
		temp = (*stack_b)->next;
		(*stack_b)->next = temp->next;
		temp->next = *stack_b;
		*stack_b = temp;
	}
	if (flag == 1)
		write(1, "sb\n", 3);
}
