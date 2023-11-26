/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshorrab <mshorrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 21:27:46 by Mustash           #+#    #+#             */
/*   Updated: 2023/11/22 21:00:11 by mshorrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;

	d = (char *)dst;
	s = (char *)src;
	if (!d && !s)
		return (NULL );
	if (d < s && len)
	{
		while (len--)
			*d++ = *s++;
	}
	else
	{
		d += len;
		s += len;
		while (len--)
			*--d = *--s;
	}
	return (dst);
}

/*
#include <stdlib.h>
int main()
{
	char str[] = "Hello World";
	char *p;
	char *d;

	d = malloc(5*sizeof(char));
	
	p = (char *) ft_memmove(d, str , 12);
	
	printf("character found %s\n", p);
	printf( "%s \n", str);
	printf ("%s\n", d);
	
	d = ft_memmove(d, str+2,3);
	p = (char *) ft_memmove(p, str , 12);
	printf("character found %s\n", p);
	printf( "%s \n", str);
	printf ("%s\n", d);
	
	return (0);
}*/