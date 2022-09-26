/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 13:39:10 by abasarud          #+#    #+#             */
/*   Updated: 2022/04/11 15:16:51 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*dest;
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (s[len] != '\0')
		len++;
	dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	while (s[i] != 0)
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
