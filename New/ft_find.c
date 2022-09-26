/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:52:01 by abasarud          #+#    #+#             */
/*   Updated: 2022/09/15 11:52:06 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_find_smallest(t_stack **stack, int x)
/* this function will find the smallest number in a linked list
** will return the location of the smallest number found, 0 is on top
** if no smaller number than x is found, the return is -1 */
{
	t_stack	*temp;
	int		i;

	i = 0;
	temp = *stack;
	while (temp != NULL)
	{
		if (temp->content < x)
			x = temp->content;
		temp = temp->next;
	}
	temp = *stack;
	while (temp && temp->content != x)
	{
		i++;
		temp = temp->next;
	}
	if (temp == NULL)
		return (-1);
	return (i);
}

int	ft_find_largest(t_stack **stack, int x)
/* this function will find the largest number in a linked list
** will return the location of the largest number found, 0 is on top
** if no larger number than x is found, the return is -1 */
{
	t_stack	*temp;
	int		i;

	i = 0;
	temp = *stack;
	while (temp != NULL)
	{
		if (temp->content > x)
			x = temp->content;
		temp = temp->next;
	}
	temp = *stack;
	while (temp && temp->content != x)
	{
		i++;
		temp = temp->next;
	}
	if (temp == NULL)
		return (-1);
	return (i);
}
