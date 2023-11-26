/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshorrab <mshorrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 16:09:07 by mshorrab          #+#    #+#             */
/*   Updated: 2023/11/19 00:58:23 by mshorrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		i;
	int		j;
	int		len;

	if (s1 == NULL || set == NULL)
		return (NULL);
	len = ft_strlen(((char *) s1));
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (len > i && ft_strchr(set, s1[len - 1]))
		len--;
	result = (char *)malloc(len - i + 1);
	if (result == NULL)
		return (NULL);
	j = 0;
	while (i < len)
		result[j++] = s1[i++];
	result[j] = '\0';
	return (result);
}

/*
#include <stdio.h>
int main()
{
	char *s1 = "      Hello World"       ;	
	char *set = " ";
	printf("%s\n", ft_strtrim(s1, set));
	return (0);
}
*/