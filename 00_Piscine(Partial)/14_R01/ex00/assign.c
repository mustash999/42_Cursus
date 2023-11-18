/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nashah <nashah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 23:25:50 by nashah            #+#    #+#             */
/*   Updated: 2023/07/23 23:25:51 by nashah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	inc_assign(int out_mtrx[4][4], int constant, int rc, int inc_or_dec)
{
	int	z;

	if (inc_or_dec == 0)
	{
		z = -1;
		while (++z < 4)
		{
			if (rc == 0)
				out_mtrx[constant][z] = z + 1;
			else
				out_mtrx[z][constant] = z + 1;
		}
	}
	else
	{
		z = 4;
		while (--z > -1)
		{
			if (rc == 0)
				out_mtrx[constant][z] = 4 - z;
			else
				out_mtrx[z][constant] = 4 - z;
		}
	}
}

void	assign_one(int out_mtrx[4][4], int i, int j)
{
	if (i == 0)
		out_mtrx[0][j] = 4;
	else if (i == 1)
		out_mtrx[3][j] = 4;
	else if (i == 2)
		out_mtrx[j][0] = 4;
	else
		out_mtrx[j][3] = 4;
}

void	assign(int out_mtrx[4][4], int *i, int *j, int in_mtrx[4][4])
{
	if (in_mtrx[*i][*j] == 1)
		assign_one(out_mtrx, *i, *j);
	else if (*i == 0) 
		inc_assign(out_mtrx, *j, 1, 0); 
	else if (*i == 1) 
		inc_assign(out_mtrx, *j, 1, 1); 
	else if (*i == 2) 
		inc_assign(out_mtrx, *j, 0, 0);
	else
		inc_assign(out_mtrx, *j, 0, 1);
}

void	init_output_matrix(int in_mtrx[4][4], int out_mtrx[4][4])
{
	int	i;
	int	j;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
			out_mtrx[i][j] = -1;
	}
	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			if (in_mtrx[i][j] == 4 || in_mtrx[i][j] == 1)
			{
				assign(out_mtrx, &i, &j, in_mtrx);
			}
		}
	}
}
