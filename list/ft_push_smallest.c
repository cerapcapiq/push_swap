/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_smallest.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:54:24 by abasarud          #+#    #+#             */
/*   Updated: 2022/09/15 11:54:28 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_push_smallest_a_help(t_stack **stack_a, int i, int n)
/* this will swap the found value to the top of the stack_a
** in the shortest way */
{
	if (n < 3)
	{
		i = 0;
		while (i < n)
		{
			ft_ra(stack_a, 1);
			i++;
		}
	}
	else
	{
		while (i >= n)
		{
			ft_rra(stack_a, 1);
			i--;
		}
	}
}

void	ft_push_smallest_a(t_stack **stack_a, t_stack **stack_b)
/* this function will push the smallest found integer of stack_a to stack_b */
{
	int		i;
	int		x;
	int		n;
	t_stack	*temp;

	i = 0;
	n = 0;
	temp = *stack_a;
	x = temp->content;
	while (temp->next != NULL)
	{
		temp = temp->next;
		i++;
		if (x > temp->content)
		{
			n = i;
			x = temp->content;
		}
	}
	if (n != 0)
		ft_push_smallest_a_help(stack_a, i, n);
	ft_pb(stack_a, stack_b);
}
