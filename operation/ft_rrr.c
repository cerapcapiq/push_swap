/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 11:44:30 by abasarud          #+#    #+#             */
/*   Updated: 2022/09/14 11:44:34 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rrr(t_stack **stack_a, t_stack **stack_b)
/* shift down all elements of stack a and stack b by one
** last element becomes first */
{
	ft_rra(stack_a, 0);
	ft_rrb(stack_b, 0);
	write(1, "rrr\n", 4);
}
