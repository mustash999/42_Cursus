/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshorrab <mshorrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 16:01:48 by mshorrab          #+#    #+#             */
/*   Updated: 2023/11/18 20:14:39 by mshorrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

/*
# include <stdio.h>
# include <fcntl.h>
int main()
{	
	int fd = open("test.txt", O_WRONLY | O_CREAT, 0664);
	char *c = "Hello World!, this a test string 2";
	if (fd != -1)
		ft_putendl_fd(c, fd);
	else
		printf("Error\n");
	ft_putendl_fd(c, 1);
	close(fd);
	return (0);
}
*/