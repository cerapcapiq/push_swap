/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_all.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:52:14 by abasarud          #+#    #+#             */
/*   Updated: 2022/09/15 11:52:18 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_lst_free(t_stack **stack)
/* will free the given linked list and set it to NULL */
{
	t_stack	*temp;

	temp = NULL;
	while (*stack)
	{
		temp = (*stack)->next;
		free(*stack);
		*stack = NULL;
		if (temp == NULL)
			break ;
		*stack = temp;
	}
}

void	ft_free_array(char **str)
/* will free the given array and set it to NULL */
{
	int	i;

	i = 0;
	while (str && str[i] != NULL)
	{
		free(str[i]);
		str[i] = NULL;
		i++;
	}
	free(str);
	str = NULL;
}
