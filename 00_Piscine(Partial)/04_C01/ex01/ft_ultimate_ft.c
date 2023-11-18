/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshorrab <mshorrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 12:24:41 by mshorrab          #+#    #+#             */
/*   Updated: 2023/07/15 14:38:33 by mshorrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

/*
#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	int	a;
	char	crs[5];

	a = 0;
	 char b= a + '0';
	 
	write(1,&b , 1);
	
	
    int *ptr1 = &a;
    int **ptr2 = &ptr1;
    int ***ptr3 = &ptr2;
    int ****ptr4 = &ptr3;
    int *****ptr5 = &ptr4;
    int ******ptr6 = &ptr5;
    int *******ptr7 = &ptr6;
    int ********ptr8 = &ptr7;
	
		
	ft_ultimate_ft(&ptr8);
	
	int len = sprintf(crs, "%d", a);
	write(1, crs, len);
	
	return (0);
}

*/