/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 09:02:45 by abasarud          #+#    #+#             */
/*   Updated: 2022/04/06 10:30:00 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, char const *src, size_t size)
{
	size_t			i;
	unsigned int	res;

	i = 0;
	res = 0;
	while (src[i] != '\0')
		i++;
	if (size != 0)
	{
		while (src[res] != '\0' && res < (size - 1))
		{
			dst[res] = src[res];
			res++;
		}
		dst[res] = '\0';
	}
	return (i);
}
