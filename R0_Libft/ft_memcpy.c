/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshorrab <mshorrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 22:58:47 by Mustash           #+#    #+#             */
/*   Updated: 2023/11/22 01:29:00 by mshorrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"	

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while ((i < n) && (dst || src))
	{
		*(char *)(dst + i) = *(char *)(src + i);
		i++;
	}
	return (dst);
}

/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char dest[20];
    const char src[] = "";

    printf("Source string: %s\n", src);

    // Using standard memcpy to set the expected result
    memcpy(dest, src, sizeof(src));
    printf("Expected result using memcpy: %s\n", dest);

    // Using ft_memcpy to copy the string
    ft_memcpy(dest, src, sizeof(src));
    printf("Result using ft_memcpy   : %s\n", dest);

    return 0;
}*/