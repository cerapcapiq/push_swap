/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 11:43:12 by abasarud          #+#    #+#             */
/*   Updated: 2022/09/14 11:43:17 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rb(t_stack **stack_b, int flag)
/* shift up all elements of stack b by one
** first element becomes last */
{
	t_stack	*temp;

	if ((*stack_b)->next == NULL)
		return ;
	temp = (*stack_b)->next;
	(*stack_b)->next = NULL;
	ft_lst_add_back(&temp, *stack_b);
	*stack_b = temp;
	if (flag == 1)
		write(1, "rb\n", 3);
}
