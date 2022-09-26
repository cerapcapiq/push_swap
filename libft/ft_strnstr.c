/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 10:34:03 by abasarud          #+#    #+#             */
/*   Updated: 2022/04/12 16:31:30 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	c;

	if (*s2 == 0 || s1 == s2)
		return ((char *)s1);
	c = ft_strlen(s2);
	while (*s1 && c <= n--)
	{
		if (!(ft_strncmp((char *)s1, (char *)s2, c)))
			return ((char *)s1);
		s1++;
	}
	return (NULL);
}
