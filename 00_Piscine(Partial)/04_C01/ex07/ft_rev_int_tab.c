/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshorrab <mshorrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 12:34:04 by mshorrab          #+#    #+#             */
/*   Updated: 2023/07/17 14:40:01 by mshorrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)

{
	int	strt;
	int	end;
	int	temp;

	strt = 0;
	end = size - 1;
	while (strt < end)
	{
		temp = tab[strt];
		tab[strt] = tab[end];
		tab[end] = temp;
		strt++;
		end--;
	}
}

/*
#include <stdio.h>

void printArray(int *arr, int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}


int main(void) {
	int arr[] = {6, 5, 3, 4, 2, 1};
	int size = sizeof(arr) / sizeof(arr[0]);

	printf("Original array: ");
	printArray(arr, size);

	ft_rev_int_tab(arr, size);

	printf("Reversed array: ");
	printArray(arr, size);

	return 0;
}
*/