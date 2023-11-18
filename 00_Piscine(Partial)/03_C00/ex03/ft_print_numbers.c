/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshorrab <mshorrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:40:42 by mshorrab          #+#    #+#             */
/*   Updated: 2023/07/13 19:48:16 by mshorrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int		digit;
	char	chr;

	digit = 0;
	while (digit <= 9)
	{
		chr = digit + '0';
		write(1, &chr, 1);
		digit++;
	}
}

/*int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/