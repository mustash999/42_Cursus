/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshorrab <mshorrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:44:24 by mshorrab          #+#    #+#             */
/*   Updated: 2023/11/20 22:42:40 by mshorrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	check_sign(const char **str, int *sign, int *trigger)
{
	if (**str == '-')
		*sign = -1;
	*trigger = 1;
	(*str)++;
}

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;
	int	trigger;

	trigger = 0;
	sign = 1;
	result = 0;
	while (*str)
	{
		if ((*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v'
				|| *str == '\r' || *str == '\f') && (trigger == 0))
		{
			str++;
			continue ;
		}
		if ((*str == '-' || *str == '+') && (trigger == 0))
			check_sign(&str, &sign, &trigger);
		if (*str < '0' || *str > '9')
			break ;
		result = (result * 10) + (*str - '0');
		trigger = 1;
		str++;
	}
	return (sign * result);
}

/*
# include <stdio.h>
# include <stdlib.h>

int main()
{
	char str[] = "0 45";
	printf("original = %d, ft_atoi = %d \n", atoi(str), ft_atoi(str));
	return (0);
}
*/