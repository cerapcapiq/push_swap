/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ss.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 11:45:09 by abasarud          #+#    #+#             */
/*   Updated: 2022/09/14 11:45:15 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_ss(t_stack **stack_a, t_stack **stack_b)
/* swap the first two elements on top of stack a and stack b
** do nothing if only one or no elements on stack */
{
	ft_sa(stack_a, 0);
	ft_sb(stack_b, 0);
	write(1, "ss\n", 3);
}
