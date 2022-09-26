/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 11:44:12 by abasarud          #+#    #+#             */
/*   Updated: 2022/09/14 11:44:19 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rrb(t_stack **stack_b, int flag)
/* shift down all elements of stack b by one
** last element becomes first */
{
	t_stack	*temp;
	t_stack	*new;

	if ((*stack_b)->next == NULL)
		return ;
	temp = *stack_b;
	while (temp->next != NULL)
		temp = temp->next;
	new = ft_lst_new(temp->content);
	new->flag = temp->flag;
	temp = *stack_b;
	while (temp->next != NULL)
	{
		if ((temp->next)->next == NULL)
		{
			free(temp->next);
			temp->next = NULL;
		}
		else
			temp = temp->next;
	}
	ft_lst_add_back(&new, *stack_b);
	*stack_b = new;
	if (flag == 1)
		write(1, "rrb\n", 4);
}
