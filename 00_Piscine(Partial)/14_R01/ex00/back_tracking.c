/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   back_tracking.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nashah <nashah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 22:43:32 by nashah            #+#    #+#             */
/*   Updated: 2023/07/23 23:28:19 by nashah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	solve(int in_mtrx[4][4], int out_mtrx[4][4]);
void	print_matrix(int in_mtrx[4][4]);
int		*init_output_matrix(int in_mtrx[4][4]);
int		recursion(int out_mtrx[4][4], int in_mtrx[4][4], int r, int c);
int		rw_lftrght(int check, int *attr, int out_mtrx[4][4], int in_mtrx[4][4]);
int		col_updown(int check, int *attr, int out_mtrx[4][4], int in_mtrx[4][4]);
int		rightleft(int check, int *attr, int out_mtrx[4][4], int in_mtrx[4][4]);
int		downup(int check, int *attr, int out_mtrx[4][4], int in_mtrx[4][4]);

int	is_valid(int out_mtrx[4][4], int in_mtrx[4][4], int *attr)
{
	out_mtrx[attr[0]][attr[1]] = attr[2];
	if (rw_lftrght(0, attr, out_mtrx, in_mtrx) == 1)
		return (1);
	if (col_updown(0, attr, out_mtrx, in_mtrx) == 1)
		return (1);
	if (rightleft(0, attr, out_mtrx, in_mtrx) == 1)
		return (1);
	if (downup(0, attr, out_mtrx, in_mtrx) == 1)
		return (1);
	return (0);
}

int	condition(int in_mtrx[4][4], int r, int c)
{
	if ((r == 0) && (in_mtrx[0][c] == 2 || in_mtrx[0][c] == 3))
		return (1);
	if ((r == 3) && (in_mtrx[1][c] == 2 || in_mtrx[1][c] == 3))
		return (1);
	if ((c == 0) && (in_mtrx[2][r] == 2 || in_mtrx[2][r] == 3))
		return (1);
	if ((c == 3) && (in_mtrx[3][r] == 2 || in_mtrx[3][r] == 3))
		return (1);
	return (0);
}

int	cond_lp(int *cur_bx_ht, int *attr, int in_mtrx[4][4], int out_mtrx[4][4])
{
	int	r;
	int	c;

	r = attr[0];
	c = attr[1];
	while (++*cur_bx_ht < 5)
	{
		if (*cur_bx_ht == 4 && (r == 0 || c == 0 || r == 3 || c == 3))
		{
			if (condition(in_mtrx, r, c) == 1)
				continue ;
		}
		attr[2] = *cur_bx_ht;
		if (is_valid(out_mtrx, in_mtrx, attr) == 0)
		{
			if (recursion(out_mtrx, in_mtrx, r, c + 1) == 0)
				return (0);
			out_mtrx[r][c] = -1;
		}
		else
			out_mtrx[r][c] = -1;
	}
	return (1);
}

int	recursion(int out_mtrx[4][4], int in_mtrx[4][4], int r, int c)
{
	int	cur_bx_ht;
	int	attr[3];

	cur_bx_ht = 0;
	attr[0] = r;
	attr[1] = c;
	if (r == 4)
		return (0);
	else if (c == 4)
		return (recursion(out_mtrx, in_mtrx, r + 1, 0));
	else if (out_mtrx[r][c] != -1)
		return (recursion(out_mtrx, in_mtrx, r, c + 1));
	else
	{
		if (cond_lp(&cur_bx_ht, attr, in_mtrx, out_mtrx) == 0)
			return (0);
		else
			return (1);
	}
}

void	solve(int in_mtrx[4][4], int out_mtrx[4][4])
{
	int	ans;

	ans = recursion(out_mtrx, in_mtrx, 0, 0);
	if (ans == 0)
	{
		print_matrix(out_mtrx);
	}
	else
		write(1, "Solution is not possible.\n", 27);
}
