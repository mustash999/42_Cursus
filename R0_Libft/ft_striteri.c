/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshorrab <mshorrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 23:15:24 by Mustash           #+#    #+#             */
/*   Updated: 2023/11/19 09:07:00 by mshorrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (*s)
		f(i++, s++);
}

/*
#include <stdio.h>

void ft_print(unsigned int i, char *s) {
	printf("index: %d, char: %c\n", i, *s);
}

int main() {
    char str[] = "Hello World";
    ft_striteri(str, ft_print);

    return (0);
}
*/