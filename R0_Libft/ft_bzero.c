/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshorrab <mshorrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 01:38:53 by Mustash           #+#    #+#             */
/*   Updated: 2023/11/19 01:30:15 by mshorrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;

	str = (char *)s;
	while (n--)
		*str++ = '\0';
}

/*
# include <stdio.h>
int main()
{
	char str[] = "Hello World!";
	ft_bzero(str, 5);
	printf("%s\n", str);
	for(int i = 0; i < 12; i++)
		printf("%c %d  ", str[i], str[i]);
	return (0);
}
*/