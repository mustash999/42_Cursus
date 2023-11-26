/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshorrab <mshorrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 23:22:22 by Mustash           #+#    #+#             */
/*   Updated: 2023/11/19 09:08:54 by mshorrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char const c, int fd)
{
	write(fd, &c, 1);
}

/*
# include <stdio.h>
# include <fcntl.h>
int main()
{	
	int fd = open("test.txt", O_WRONLY | O_CREAT, 0664);
	char c = 'a';
	if (fd != -1)
		ft_putchar_fd(c, fd);
	else
		printf("Error\n");
	ft_putchar_fd(c, 1);
	close(fd);
	return (0);
}
*/