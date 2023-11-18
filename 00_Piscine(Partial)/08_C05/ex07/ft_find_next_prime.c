/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshorrab <mshorrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 19:58:35 by mshorrab          #+#    #+#             */
/*   Updated: 2023/07/27 15:53:17 by mshorrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt_mod(int nb)
{
	int	i;
	int	sqrt;

	sqrt = 0;
	i = 1;
	while (nb > 0)
	{
		nb -= i;
		i += 2;
		sqrt++;
	}
	if (nb == 0)
		return (sqrt);
	else
		return (sqrt - 1);
}

int	rec_prime_odd(int nb, int sq, int j)
{
	while (nb <= 2147483647)
	{
		sq = ft_sqrt_mod (nb);
		j = 2;
		while (j <= sq)
		{
			if (nb % j == 0)
			{
				nb += 2;
				j = 2;
				continue ;
			}
			if (!(nb % j == 0) && j < sq)
			{
				j++;
			}
			else if (!(nb % j == 0) && j >= sq)
			{
				return (nb);
			}
		}
		return (nb);
	}
	return (0);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	if (nb % 2 == 0)
	{
		nb += 1;
		return (rec_prime_odd (nb, 0, 0));
	}
	else
		return (rec_prime_odd (nb, 0, 0));
}
