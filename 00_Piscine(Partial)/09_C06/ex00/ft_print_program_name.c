/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshorrab <mshorrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 23:08:03 by mshorrab          #+#    #+#             */
/*   Updated: 2023/07/26 23:24:17 by mshorrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		str++;
		len++;
	}
	return (len);
}

int	main(int argc, char *argv[])
{
	int	len;

	argc = 2;
	len = ft_strlen(argv[0]);
	write(1, argv[0], len);
	write(1, &"\n", 1);
	return (0);
}
