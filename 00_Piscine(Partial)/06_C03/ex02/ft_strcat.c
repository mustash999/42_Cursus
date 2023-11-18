/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshorrab <mshorrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 13:27:56 by mshorrab          #+#    #+#             */
/*   Updated: 2023/07/21 19:33:17 by mshorrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	glen(const char *c)
{
	int	i;

	i = 0;
	while (*c != '\0')
	{
		i++;
		c++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	char	*ogpt;

	i = 0;
	ogpt = dest;
	while (ogpt[i] != '\0')
	{
		i++;
	}
	while (*src != '\0')
	{
		ogpt[i] = *src;
		i++;
		src++;
	}
	ogpt[i] = '\0';
	return (dest);
}
