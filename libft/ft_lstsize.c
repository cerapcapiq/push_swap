/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 12:39:44 by abasarud          #+#    #+#             */
/*   Updated: 2022/04/12 12:42:14 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*size;

	i = 0;
	size = lst;
	if (size == NULL)
		return (0);
	while (size != NULL)
	{
		i++;
		size = size->next;
	}
	return (i);
}
