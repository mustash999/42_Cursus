/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshorrab <mshorrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 21:36:43 by mshorrab          #+#    #+#             */
/*   Updated: 2023/07/26 21:33:34 by mshorrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	i = 1;
	result = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
	{
		while (i <= nb)
		{
			result *= i;
			i++;
		}
	}
	return (result);
}
