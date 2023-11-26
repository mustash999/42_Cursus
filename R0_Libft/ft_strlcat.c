/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshorrab <mshorrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 20:19:09 by mshorrab          #+#    #+#             */
/*   Updated: 2023/11/19 01:30:15 by mshorrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	tot;
	size_t	i;
	size_t	j;

	j = 0;
	i = ft_strlen(dest);
	tot = ft_strlen(dest) + ft_strlen(src);
	if (size < 1)
		return ((ft_strlen(src) + size));
	else if (size < (size_t) ft_strlen(dest))
		return ((ft_strlen(src) + size));
	while (src[j] && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (tot);
}
