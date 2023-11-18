/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshorrab <mshorrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 09:48:46 by mshorrab          #+#    #+#             */
/*   Updated: 2023/07/13 19:48:40 by mshorrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	combine(char a, char b, char c)
{
	char	crs[5];

	if (a == '7' && b == '8' && c == '9')
	{
		crs[0] = a;
		crs[1] = b;
		crs[2] = c;
		write(1, &crs, 3);
	}
	else
	{
		crs[0] = a;
		crs[1] = b;
		crs[2] = c;
		crs[3] = ',';
		crs[4] = ' ';
		write(1, &crs, 5);
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = '1';
	c = '2';
	while (a < ':')
	{
		while (b < ':')
		{
			while (c < ':') 
			{
				combine(a, b, c);
				c ++;
			}
			b++;
			c = b + 1;
		}
		a++;
		b = a + 1;
		c = b + 1;
	}
}

/*int	main(void)
{
	ft_print_comb();
	return (0);
}
*/