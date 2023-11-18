/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdereszy <sdereszy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 16:36:32 by sdereszy          #+#    #+#             */
/*   Updated: 2023/07/16 16:36:39 by sdereszy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	edge(int x);
void	middle(int x);

void	rush(int x, int y)
{
	int	i;

	i = 0;
	while (i < y)
	{
		if (i == 0 || i == y - 1)
		{
			edge(x);
		}
		else 
		{
			middle (x);
		}
		ft_putchar ('\n');
		i++;
	}
}

void	edge(int x)
{
	int	j;

	j = 0;
	while (j < x)
	{
		if (j == 0)
		{
			ft_putchar('A');
		}
		else if (j == x - 1)
		{
			ft_putchar('C');
		}
		else
		{
			ft_putchar('B');
		}
		j++;
	}
}

void	middle(int x)
{
	int	j;

	j = 0;
	while (j < x)
	{
		if (j == 0 || j == x - 1)
		{
			ft_putchar('B');
		}
		else
		{
			ft_putchar(' ');
		}
		j++;
	}
}
