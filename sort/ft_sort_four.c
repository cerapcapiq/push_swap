/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_four.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:57:41 by abasarud          #+#    #+#             */
/*   Updated: 2022/09/15 11:57:45 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort_four(t_stack **stack_a, t_stack **stack_b)
/* will sort four numbers */
{
	ft_push_smallest_a(stack_a, stack_b);
	ft_sort_three(stack_a);
	ft_pa(stack_a, stack_b);
}
