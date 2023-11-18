/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshorrab <mshorrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 12:02:14 by mshorrab          #+#    #+#             */
/*   Updated: 2023/07/31 15:49:08 by mshorrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_fill(void)
{
	char	*container;

	container = (char *)malloc(1);
	*container = '\0';
	return (container);
}

void	ft_multi_sct(char *container, char **strs, int size, char *sep)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (strs[i] != NULL)
		{
			ft_strcat(container, strs[i]);
			if (i < size - 1)
				ft_strcat(container, sep);
		}
		i++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	int		i;
	char	*container;

	i = 0;
	len = (size - 1) * ft_strlen(sep);
	if (size <= 0)
		return (ft_fill());
	while (i < size)
	{
		if (strs[i] != NULL)
			len += ft_strlen(strs[i]);
		container = (char *)malloc(len + 1);
		if (container == NULL)
			return (ft_fill());
		i++;
	}
	ft_multi_sct(container, strs, size, sep);
	return (container);
}
