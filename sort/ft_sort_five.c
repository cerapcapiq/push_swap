/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_five.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:57:28 by abasarud          #+#    #+#             */
/*   Updated: 2022/09/15 11:57:32 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort_five(t_stack **stack_a, t_stack **stack_b)
/* this function will sort by ascending order into stack_a
** only works if there is 5 numbers */
{
	ft_push_smallest_a(stack_a, stack_b);
	ft_push_smallest_a(stack_a, stack_b);
	ft_sort_three(stack_a);
	ft_pa(stack_a, stack_b);
	ft_pa(stack_a, stack_b);
}
