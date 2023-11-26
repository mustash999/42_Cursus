/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshorrab <mshorrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 18:15:42 by Mustash           #+#    #+#             */
/*   Updated: 2023/11/19 09:29:45 by mshorrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

/*
#include<ctype.h>
# include <stdio.h>

int main()
{
	int c;
	c = 'a';
	printf("ft isdigit is   :%d\n", ft_isdigit(c));
	printf("org. isdigit is :%d\n", isdigit(c));
	return (0);
}

*/