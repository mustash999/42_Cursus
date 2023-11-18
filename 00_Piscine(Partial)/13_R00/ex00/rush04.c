/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamas <atamas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 20:57:39 by atamas            #+#    #+#             */
/*   Updated: 2023/07/16 22:32:36 by atamas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	edge(int x);
void	middle(int x);
void	endline(int x);

void	rush(int x, int y)
{
	int	i;

	i = 0;
	while (i < y)
	{
		if (i == 0)
		{
			edge(x);
		}
		else if (i == y - 1)
		{
			endline(x);
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

void	endline(int x)
{
	int	k;

	k = 0;
	while (k < x)
	{
		if (k == 0)
		{
			ft_putchar('C');
		}
		else if (k == x - 1)
		{
			ft_putchar('A');
		}
		else
		{
			ft_putchar('B');
		}
		k++;
	}
}
