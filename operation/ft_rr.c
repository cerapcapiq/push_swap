/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 11:43:43 by abasarud          #+#    #+#             */
/*   Updated: 2022/09/14 11:43:46 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rr(t_stack **stack_a, t_stack **stack_b)
/* shift up all elements of stack a and stack b by one
** first element becomes last */
{
	ft_ra(stack_a, 0);
	ft_rb(stack_b, 0);
	write(1, "rr\n", 3);
}
