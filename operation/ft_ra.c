/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 11:42:56 by abasarud          #+#    #+#             */
/*   Updated: 2022/09/14 11:43:02 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_ra(t_stack **stack_a, int flag)
/* shift up all elements of stack a by one
** first element becomes last */
{
	t_stack	*temp;

	if ((*stack_a)->next == NULL)
		return ;
	temp = (*stack_a)->next;
	(*stack_a)->next = NULL;
	ft_lst_add_back(&temp, *stack_a);
	*stack_a = temp;
	if (flag == 1)
		write(1, "ra\n", 3);
}
