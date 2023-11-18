/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshorrab <mshorrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 21:39:28 by mshorrab          #+#    #+#             */
/*   Updated: 2023/07/19 10:56:02 by mshorrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_to_hex(int c)
{
	char	*base;

	base = "0123456789abcdef";
	if (c >= 16)
	{
		ft_to_hex(c / 16);
		ft_to_hex(c % 16);
	}
	else
	{
		ft_putchar('0');
		ft_putchar(base[c]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] == 127)
		{
			ft_putchar('\\');
			n = str[i];
			ft_to_hex(n);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}
