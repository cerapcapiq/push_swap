/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 11:43:54 by abasarud          #+#    #+#             */
/*   Updated: 2022/09/14 11:43:59 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rra(t_stack **stack_a, int flag)
/* shift down all elements of stack a by one
** last element becomes first */
{
	t_stack	*temp;
	t_stack	*new;

	if ((*stack_a)->next == NULL)
		return ;
	temp = *stack_a;
	while (temp->next != NULL)
		temp = temp->next;
	new = ft_lst_new(temp->content);
	new->flag = temp->flag;
	temp = *stack_a;
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
	ft_lst_add_back(&new, *stack_a);
	*stack_a = new;
	if (flag == 1)
		write(1, "rra\n", 4);
}
