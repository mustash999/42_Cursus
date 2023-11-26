/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshorrab <mshorrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 16:07:10 by mshorrab          #+#    #+#             */
/*   Updated: 2023/11/18 19:10:13 by mshorrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	intlen(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		count++;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*handle_min_int(void)
{
	char	*str;

	str = (char *)malloc(12 * sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, "-2147483648", 12);
	return (str);
}

int	chk_neg(int *n)
{
	int	is_neg;

	is_neg = 0;
	if (*n < 0)
	{
		is_neg = 1;
		*n = -*n;
	}
	return (is_neg);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		is_neg;

	if (n == -2147483648)
		return (handle_min_int());
	len = intlen(n);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	is_neg = chk_neg(&n);
	while (len > 0)
	{
		len--;
		str[len] = (n % 10) + '0';
		n /= 10;
	}
	if (is_neg)
		str[0] = '-';
	return (str);
}

/*
#include <stdio.h>

int main(void)
{
	// Test cases
	int test_cases[] = {0, 123, -456, -123, 7890, -2147483648, 2147483647};

	for (size_t i = 0; i < sizeof(test_cases) / sizeof(test_cases[0]); i++)
	{
		int n = test_cases[i];
		char *result = ft_itoa(n);

		if (result)
		{
			printf("Input: %d, Result: %s\n", n, result);
			free(result); // Don't forget to free the allocated memory
		}
		else
		{
			printf("Memory allocation failed for input: %d\n", n);
		}
	}

	return 0;
}
*/