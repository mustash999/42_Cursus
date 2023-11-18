/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshorrab <mshorrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 12:56:52 by mshorrab          #+#    #+#             */
/*   Updated: 2023/07/17 17:12:33 by mshorrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1 - i)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
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
	int arr[] = {5, 3, 1, 4, 2};
	int size = sizeof(arr) / sizeof(arr[0]);

	printf("Original array: ");
	printArray(arr, size);

	ft_sort_int_tab(arr, size);

	printf("Sorted array: ");
	printArray(arr, size);

	return 0;
}
*/