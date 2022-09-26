/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:50:21 by abasarud          #+#    #+#             */
/*   Updated: 2022/09/15 11:50:25 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_doubles(unsigned int *numbers, char **input, int j)
/* this function will check **input for doubles
** if double is found return is 1 */
{
	int					n;
	unsigned int		u;

	n = ft_atoi(input[j]);
	if (n < 0)
	{
		u = (n * -1) + 2147483647;
		numbers[u]++;
		if (numbers[u] > 1)
			return (1);
	}
	else
	{
		++numbers[n];
		if (numbers[n] > 1)
			return (1);
	}
	return (0);
}

int	ft_input_error(char **input)
{
	int					i;
	int					j;
	static unsigned int	numbers[4294967295];

	j = 0;
	while (input[j] != NULL)
	{
		i = 0;
		while (input[j][i] != '\0')
		{
			if (input[j][i] == '-')
				i++;
			if (!ft_isdigit(input[j][i]))
				return (1);
			i++;
		}
		if (ft_doubles(numbers, input, j) == 1)
			return (1);
		j++;
	}
	return (0);
}

// this function will scan **input for non digit values and doubles
//if double or non digit found return is 1 

int	lancau(char **input)
{
	if (ft_input_error(input) == 1)
	{
		write(2, "Error\n", 6);
		ft_free_array(input);
		exit (1);
	}
	else
		return (0);
}
