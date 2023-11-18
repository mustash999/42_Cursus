/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshorrab <mshorrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 23:08:23 by mshorrab          #+#    #+#             */
/*   Updated: 2023/07/27 21:13:53 by mshorrab         ###   ########.fr       */
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
	int	i;

	i = argc -1;
	while (i > 0)
	{
		len = ft_strlen(argv[i]);
		write(1, argv[i], len);
		write(1, &"\n", 1);
		i--;
	}
	return (0);
}
