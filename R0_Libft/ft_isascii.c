/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshorrab <mshorrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 18:18:41 by Mustash           #+#    #+#             */
/*   Updated: 2023/11/19 09:30:02 by mshorrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*
#include<ctype.h>
#include<stdio.h>

int main ()
{
	int c;
	c = 'a';
	printf("ft isascii is   :%d\n", ft_isascii(c));
	printf("org. isascii is :%d\n", isascii(c));
	return (0);
}
*/