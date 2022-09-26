/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 11:44:42 by abasarud          #+#    #+#             */
/*   Updated: 2022/09/14 11:44:49 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sa(t_stack **stack_a, int flag)
/* swap the first two elements on top of stack a
** do nothing if only one or no elements on stack */
{
	t_stack	*temp;

	if (stack_a && (*stack_a)->next != NULL)
	{
		temp = (*stack_a)->next;
		(*stack_a)->next = temp->next;
		temp->next = *stack_a;
		*stack_a = temp;
	}
	if (flag == 1)
		write(1, "sa\n", 3);
}
