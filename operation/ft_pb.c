/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 11:42:38 by abasarud          #+#    #+#             */
/*   Updated: 2022/09/14 11:42:44 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_pb(t_stack **stack_a, t_stack **stack_b)
/* take element from top of stack a and put it on top stack b
** do nothing if stack a is empty */

{
	t_stack	*temp;

	if (*stack_a)
	{
		temp = (*stack_a)->next;
		(*stack_a)->next = *stack_b;
		*stack_b = *stack_a;
		*stack_a = temp;
		write(1, "pb\n", 3);
	}
}
