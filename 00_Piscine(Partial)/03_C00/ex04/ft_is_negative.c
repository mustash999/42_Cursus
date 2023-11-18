/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshorrab <mshorrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 20:12:52 by mshorrab          #+#    #+#             */
/*   Updated: 2023/07/13 09:22:59 by mshorrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	ch;

	if (n < 0)
	{
		ch = 'N';
	}
	else
	{
		ch = 'P';
	}
	write(1, &ch, 1);
}

/*
int main()
{
    int num = 5;
    ft_is_negative(num);
    return 0;
}
*/