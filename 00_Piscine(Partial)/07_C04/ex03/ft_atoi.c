/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshorrab <mshorrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:44:24 by mshorrab          #+#    #+#             */
/*   Updated: 2023/07/26 00:38:56 by mshorrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	handsign(char c, int *sign)
{
	if (c == '-')
		*sign = *sign * -1;
	else
		*sign = *sign * 1;
}

int	ft_atoi(char *str)
{
	int		result;
	int		sign;
	int		i;

	i = 0;
	sign = 1;
	result = 0;
	while ((*str))
	{
		if (*str == '+' || *str == '-')
			handsign(*str, &sign);
		else if (*str >= '0' && *str <= '9')
		{
			result = (result * 10) + (*str - '0');
			i = 1;
		}
		else
			if (i > 0)
				return (result * sign);
		str++;
	}
	return (result * sign);
}
