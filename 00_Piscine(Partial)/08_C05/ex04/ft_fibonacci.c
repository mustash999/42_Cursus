/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshorrab <mshorrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 13:05:00 by mshorrab          #+#    #+#             */
/*   Updated: 2023/07/26 21:56:00 by mshorrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1); 
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else 
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2)); 
}
