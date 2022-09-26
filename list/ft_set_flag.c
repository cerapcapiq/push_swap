/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_flag.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:54:36 by abasarud          #+#    #+#             */
/*   Updated: 2022/09/15 11:54:41 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_set_flag(t_stack **stack, int x)
/* will set all push values of linked list stack to value of x
** does nothing if stack == NULL */
{
	t_stack	*temp;

	temp = *stack;
	while (temp != NULL)
	{
		if (temp->next == NULL)
		{
			temp->flag = x;
			break ;
		}
		temp->flag = x;
		temp = temp->next;
	}
}
