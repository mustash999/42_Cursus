/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshorrab <mshorrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 12:19:31 by mshorrab          #+#    #+#             */
/*   Updated: 2023/07/17 12:31:27 by mshorrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0') 
	{
		len++;
	}
	return (len);
}

/*
#include <stdio.h>
int	main(void)
{
	int a = ft_strlen("Hello world this is me ");

	printf( "this  %d", a);
	
	
	return (0);
}
*/