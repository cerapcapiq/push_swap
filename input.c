/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:50:31 by abasarud          #+#    #+#             */
/*   Updated: 2022/09/15 11:50:38 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_input(char **av, char **input)
{
	char		**split;
	int			j;
	int			i;
	int			end;

	end = 0;
	j = 1;
	i = 0;
	while (av[j] != NULL)
	{
		split = ft_split(av[j], ' ');
		i = 0;
		while (split[i] != NULL)
		{
			input[end] = ft_strdup(split[i]);
			i++;
			end++;
		}
		ft_free_array(split);
		j++;
	}
	return (end);
}

/*  turn av into a valid input
** change every number to a single string 
 j init to 1, as av is 0*/
