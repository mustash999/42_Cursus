/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshorrab <mshorrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 16:36:32 by sdereszy          #+#    #+#             */
/*   Updated: 2023/07/16 21:58:11 by mshorrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	edge(int x, char fc, char mc, char lc);
void	middle(int x);

void	rush(int x, int y)
{
	int	i;

	i = 0;
	while (i < y)
	{
		if (i == 0)
		{
			edge(x, 'A', 'B', 'A');
		}
		else if (i == y - 1)
		{
			edge(x, 'C', 'B', 'C');
		}
		else 
		{
			middle (x);
		}
		ft_putchar ('\n');
		i++;
	}
}

void	edge(int x, char fc, char mc, char lc)
{
	int	j;

	j = 0;
	while (j < x)
	{
		if (j == 0)
		{
			ft_putchar(fc);
		}
		else if (j == x - 1)
		{
			ft_putchar(lc);
		}
		else
		{
			ft_putchar(mc);
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
