/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshorrab <mshorrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 19:13:47 by Mustash           #+#    #+#             */
/*   Updated: 2023/11/22 20:59:01 by mshorrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	tmp_len;

	if (*to_find == '\0')
		return ((char *)str);
	while (len > 0 && *str != '\0')
	{
		i = 0;
		tmp_len = len;
		while (tmp_len > 0 && str[i] == to_find[i] && str[i] != '\0')
		{
			i++;
			tmp_len--;
		}
		if (to_find[i] == '\0')
			return ((char *)str);
		str++;
		len--;
	}
	return (0);
}

/*
# include <string.h>
#include <stdio.h>


int main()
{
	char str[] = "aaabcabcd";
	char to_find[] = "abcd";
	unsigned int len = 9;
	printf("ft strnstr is   :%s\n", ft_strnstr(str, to_find, len));
	//printf("org. strnstr is :%s\n", strnstr(str, to_find, len)); only on macos 
	return (0);
}
*/