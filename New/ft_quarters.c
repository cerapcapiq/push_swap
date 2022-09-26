/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quarters.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:53:04 by abasarud          #+#    #+#             */
/*   Updated: 2022/09/15 11:53:09 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_quarters(t_quart **quart, int argc, t_stack **stack_a)
/* will "split" my stack into four parts, all of the same size */
{
	t_stack	*temp;

	temp = NULL;
	(*quart)->second = ft_median(argc, stack_a);
	ft_lst_copy(stack_a, &temp);
	ft_set_flag(&temp, 0);
	ft_del_larger_x(&temp, (*quart)->second);
	argc = ft_lst_size(&temp);
	(*quart)->first = ft_median(argc, &temp);
	ft_lst_copy(stack_a, &temp);
	ft_del_smaller_x(&temp, (*quart)->second);
	argc = ft_lst_size(&temp);
	(*quart)->third = ft_median(argc, &temp);
	ft_lst_free(&temp);
}
