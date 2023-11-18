/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshorrab <mshorrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 11:09:27 by mshorrab          #+#    #+#             */
/*   Updated: 2023/07/31 11:52:26 by mshorrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;
	int	*array;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	array = (int *)malloc(size * sizeof(int));
	if (range == NULL)
	{
		return (-1);
	}
	i = 0;
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	*range = array;
	return (size);
}

/*
int main() {
    int min = 15;
    int max = 15;
    int *result = NULL;

    int size = ft_ultimate_range(&result, min, max);

    if (result != NULL) {
        printf("Array elements between %d and %d:\n", min, max);
        for (int i = 0; i < size; i++) {
            printf("%d ", result[i]);
        }
        printf("\n");

        free(result); // Remember to free the dynamically allocated memory
    } else {
        printf("min should be less than max. size is  %d \n", size);
    }

    return 0;
}
*/