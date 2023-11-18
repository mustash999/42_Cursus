/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshorrab <mshorrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 16:19:25 by mshorrab          #+#    #+#             */
/*   Updated: 2023/07/13 19:48:54 by mshorrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	combine(int a, int b, int c, int d)
{
	char	crs[6];

	crs[0] = (a + '0');
	crs[1] = (b + '0');
	crs[2] = ' ';
	crs[3] = (c + '0');
	crs[4] = (d + '0');
	crs[5] = ',';
	write(1, &crs, 6);
}

void	ft_print_comb2(void)
{
	int	i;

	while (i < 10)
	{
		combine(0, 0, 0, (i));
		i++;
	}
	while (i > 9 && i <= 99)
	{
		combine(0, 0, (i / 10), (i - (i / 10) * 10));
		i++;
	}
	while (i > 99 && i <= 999)
	{
		combine(0, (i / 100),
			((i - ((i / 100) * 100)) / 10), (i - ((i / 10) * 10)));
		i++;
	}
	while (i > 999 && i <= 9999)
	{
		combine((i / 1000), ((i - ((i / 1000) * 1000)) / 100),
			((i - ((i / 100) * 100)) / 10), (i - ((i / 10) * 10)));
		i++;
	}
}

/*int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/