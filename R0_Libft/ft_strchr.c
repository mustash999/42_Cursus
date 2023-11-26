/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshorrab <mshorrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 21:43:29 by Mustash           #+#    #+#             */
/*   Updated: 2023/11/20 23:03:00 by mshorrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	c = c % 256;
	if (c == '\0')
	{
		while (*str)
			str++;
		return (str);
	}
	while (*str)
	{
		if (*str == c)
			return (str);
		str++;
	}
	return (NULL);
}
