/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nashah <nashah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 21:20:35 by nashah            #+#    #+#             */
/*   Updated: 2023/07/23 23:28:49 by nashah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		parse_input(const char *input, int (*in_mtrx)[4]);
void	init_output_matrix(int in_mtrx[4][4], int out_mtrx[4][4]);
void	print_matrix(int in_mtrx[4][4]);
void	solve(int in_mtrx[4][4], int out_mtrx[4][4]);

int	main(int argc, char **argv)
{
	int	in_mtrx[4][4];
	int	out_mtrx[4][4];

	if (argc != 2)
	{
		write(1, "Give exactly one input.\n", 24);
		return (1);
	}
	if (parse_input(argv[1], in_mtrx) == 1)
	{
		write(1, "Inputs must be a whole no. between 1 and 4.\n", 45);
		return (1);
	}
	init_output_matrix(in_mtrx, out_mtrx);
	solve(in_mtrx, out_mtrx);
	return (0);
}
