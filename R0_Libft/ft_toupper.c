/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshorrab <mshorrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 18:52:37 by Mustash           #+#    #+#             */
/*   Updated: 2023/11/19 09:02:43 by mshorrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}

/*
# include <ctype.h>
# include <stdio.h>

int main()
{
	int c;
	c = 'a';
	printf("ft toupper is   :%c\n", ft_toupper(c));
	printf("org. toupper is :%c\n", toupper(c));
	return (0);
}
*/