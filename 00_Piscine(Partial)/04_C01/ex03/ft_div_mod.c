/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshorrab <mshorrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 09:37:49 by mshorrab          #+#    #+#             */
/*   Updated: 2023/07/17 17:15:29 by mshorrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int	*mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
#include <stdio.h>
int main()
{
	int a = 10;
	int b = 3;
	int quotient, remainder;

	ft_div_mod(a, b, &quotient, &remainder);

	printf("Quotient: %d\n", quotient);
	printf("Remainder: %d\n", remainder);

	return 0;
}*/