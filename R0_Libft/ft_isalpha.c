/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshorrab <mshorrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 17:57:59 by Mustash           #+#    #+#             */
/*   Updated: 2023/11/19 09:30:25 by mshorrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

/*
# include<ctype.h>
# include<stdio.h>

int main()
{
	int c;
	c = 'a';
	printf("ft isalpha is   :%d\n", ft_isalpha(c));
	printf("org. isalpha is :%d\n", isalpha(c));
	return (0);
}
*/