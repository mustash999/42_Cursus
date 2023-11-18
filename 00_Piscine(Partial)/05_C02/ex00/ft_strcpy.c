/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshorrab <mshorrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 20:08:44 by mshorrab          #+#    #+#             */
/*   Updated: 2023/07/19 11:07:33 by mshorrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char	*copy;

	copy = dest; 
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (copy);
}

/*
#include <stdio.h>

int main() {
	char source[]= "Hello, World!";
	
	
	char destination[20];

	ft_strcpy(destination, source);

	printf("Copied string: %s\n", destination);
	return 0;
}
*/