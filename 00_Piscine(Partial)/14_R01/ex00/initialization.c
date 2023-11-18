/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialization.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nashah <nashah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 21:29:36 by nashah            #+#    #+#             */
/*   Updated: 2023/07/23 23:35:54 by nashah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_matrix(int in_mtrx[4][4]);

int	parse_input(const char *input, int (*in_mtrx)[4])
{
	int	i;
	int	row;
	int	num_integers;

	i = 0;
	row = 0;
	num_integers = 0;
	while (input[i] != '\0')
	{
		if (input[i] == ' ')
		{
			i++;
			continue ;
		}
		else if (input[i] >= '1' && input[i] <= '4')
		{
			in_mtrx[row][num_integers] = input[i] - '0';
			num_integers++;
			if (num_integers > 16)
				return (1);
		}
		else
			return (1);
		i++;
	}
	if (num_integers != 16)
		return (1);
	return (0);
}

void	print_matrix(int in_mtrx[4][4])
{
	int		i;
	int		j;
	char	ans;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			ans = in_mtrx[i][j] + '0';
			write(1, &ans, 1);
			if (j < 3)
				write(1, " ", 1);
		}
		write(1, "\n", 1);
	}
}
