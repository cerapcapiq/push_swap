/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_if_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:52:29 by abasarud          #+#    #+#             */
/*   Updated: 2022/09/15 11:52:34 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_if_sorted(int argc, t_stack **stack)
/* this function returns 1 if the stack is sorted correctly, 0 if not */
{
	t_stack	*temp;
	int		i;

	i = 0;
	temp = *stack;
	while (temp)
	{
		if (temp->next != NULL && temp->content < temp->next->content)
		{
			temp = temp->next;
			i++;
		}
		else if (temp->next == NULL)
		{
			i++;
			if (i == argc)
				return (1);
		}
		else
			break ;
	}
	return (0);
}
