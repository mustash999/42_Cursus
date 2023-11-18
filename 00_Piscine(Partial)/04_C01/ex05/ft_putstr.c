/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshorrab <mshorrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 11:21:41 by mshorrab          #+#    #+#             */
/*   Updated: 2023/07/17 12:18:00 by mshorrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0') 
	{
		len++;
	}
	write(1, str, len);
}

/*
void ft_putstr(char *str) {

	int len;
	len = 0;
	
	
	while (str[len] != '\0')
	{
	len++;
	
	}
	write(1, str[], 1);
}




}

int main(void){
	ft_putstr("\n \n \\ \\");
	return(0);
}*/