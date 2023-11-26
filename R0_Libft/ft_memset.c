/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshorrab <mshorrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 01:05:25 by Mustash           #+#    #+#             */
/*   Updated: 2023/11/19 01:30:15 by mshorrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*str;

	str = (char *)b;
	while (len--)
		*str++ = (unsigned char)c;
	return (b);
}

/*
# include <stdio.h>
int main()
{
	char str[] = "Hello World!";
	ft_memset(str, 'a', 5);
	printf("%s\n", str);
	return (0);
}
*/