/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 10:13:26 by abasarud          #+#    #+#             */
/*   Updated: 2022/04/06 10:15:16 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	if ((unsigned char)ch == 0)
		return ((char *)(str + ft_strlen(str)));
	while (*str)
	{
		if (*str == (unsigned char)ch)
			return ((char *)str);
		str++;
	}
	return (0);
}
