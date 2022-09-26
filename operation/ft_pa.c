/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 11:42:25 by abasarud          #+#    #+#             */
/*   Updated: 2022/09/14 11:42:30 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_pa(t_stack **stack_a, t_stack **stack_b)
/* take element from top of stack b and put it on top stack a
** do nothing if stack b is empty */

{
	t_stack	*temp;

	if (*stack_b)
	{
		temp = (*stack_b)->next;
		(*stack_b)->next = *stack_a;
		*stack_a = *stack_b;
		*stack_b = temp;
		write(1, "pa\n", 3);
	}
}
