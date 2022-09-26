/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 11:41:53 by abasarud          #+#    #+#             */
/*   Updated: 2022/09/26 14:03:47 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char *av[])
{
	t_stack		*stack_a;
	t_stack		*stack_b;
	char		**input;

	input = ft_calloc(501, sizeof(char *));
	if (ac < 2)
		exit (1);
	ac = ft_input(av, input);
	lancau(input);
	stack_a = ft_fill_list(ac, input);
	if (stack_a == NULL)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	if (ft_if_sorted(ac, &stack_a) == 1)
	{
		ft_lst_free(&stack_a);
		return (0);
	}
	ft_sort(ac, &stack_a, &stack_b);
	return (0);
}
