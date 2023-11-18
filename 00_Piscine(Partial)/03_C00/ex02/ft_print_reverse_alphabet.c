/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshorrab <mshorrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 17:07:32 by mshorrab          #+#    #+#             */
/*   Updated: 2023/07/13 12:51:05 by mshorrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	ch;
	int		i;

	ch = 'z';
	i = 1;
	while (i <= 26)
	{
		write(1, &ch, 1);
		i ++ ;
		ch = ch - 1;
	}
}

/*
int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
*/