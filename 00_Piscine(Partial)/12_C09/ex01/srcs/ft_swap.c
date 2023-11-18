/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshorrab <mshorrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 14:44:37 by mshorrab          #+#    #+#             */
/*   Updated: 2023/07/15 16:18:18 by mshorrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	i;
	int	i2;

	i = *b;
	i2 = *a;
	*b = i2;
	*a = i;
}

/*

#include <stdio.h>
#include <unistd.h>

int main(void) 
{
    int x = 0;
    int y = 9;
	
    char ac = (x + '0');
    char bc = (y + '0');
	
    char ca[50];
    char cb[50]; 
	char size[50];
	
    sprintf(cb, "this b val %d\n", y);
	sprintf(ca, "this a val %d\n", x);
	
    write(1, &ca, 13);
    write(1, &cb, 13);

	ft_swap(&x, &y);

	sprintf(cb, "and b is   %d\n", y);
	sprintf(ca, "now a is   %d\n", x);
	
    write(1, &ca, 13);
    write(1, &cb, 13);


    return (0);
}
*/