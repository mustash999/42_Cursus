/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshorrab <mshorrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 20:19:09 by mshorrab          #+#    #+#             */
/*   Updated: 2023/07/24 12:27:29 by mshorrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

unsigned int	glen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		str++;
		len++;
	}
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	tot;
	unsigned int	i;
	unsigned int	j;

	j = 0;
	i = glen(dest);
	tot = glen(dest) + glen(src);
	if (size < 1)
		return ((glen(src) + size));
	else if (size < glen(dest))
		return ((glen(src) + size));
	while (src[j] && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (tot);
}
