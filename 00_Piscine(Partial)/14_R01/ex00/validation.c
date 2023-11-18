/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nashah <nashah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 22:44:36 by nashah            #+#    #+#             */
/*   Updated: 2023/07/23 23:29:59 by nashah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	rw_lftrght(int check, int *attr, int out_mtrx[4][4], int in_mtrx[4][4])
{
	int	i;
	int	highest;
	int	count;

	i = -1;
	highest = 0;
	count = 0;
	while (++i < 4)
	{
		if (attr[2] == out_mtrx[attr[0]][i] && i != attr[1])
			return (1);
		if (out_mtrx[attr[0]][i] > highest)
		{
			highest = out_mtrx[attr[0]][i];
			count++;
		}
		if (out_mtrx[attr[0]][i] == -1)
			check = 1;
	}
	if (count != in_mtrx[2][attr[0]] && check == 0)
		return (1);
	return (0);
}

int	col_updown(int check, int *attr, int out_mtrx[4][4], int in_mtrx[4][4])
{
	int	i;
	int	highest;
	int	count;

	count = 0;
	i = -1;
	highest = 0;
	while (++i < 4)
	{
		if (attr[2] == out_mtrx[i][attr[1]] && i != attr[0])
			return (1);
		if (out_mtrx[i][attr[1]] > highest)
		{
			highest = out_mtrx[i][attr[1]];
			count++;
		}
		if (out_mtrx[i][attr[1]] == -1)
			check = 1;
	}
	if (check == 0 && count != in_mtrx[0][attr[1]])
		return (1);
	return (0);
}

int	rightleft(int check, int *attr, int out_mtrx[4][4], int in_mtrx[4][4])
{
	int	count;
	int	highest;
	int	i;

	count = 0;
	highest = 0;
	i = 4;
	while (--i > -1)
	{
		if (out_mtrx[attr[0]][i] > highest)
		{
			highest = out_mtrx[attr[0]][i];
			count++;
		}
		if (out_mtrx[attr[0]][i] == -1)
			check = 1;
	}
	if (check == 0 && count != in_mtrx[3][attr[0]])
		return (1);
	return (0);
}

int	downup(int check, int *attr, int out_mtrx[4][4], int in_mtrx[4][4])
{
	int	count;
	int	highest;
	int	i;

	count = 0;
	highest = 0;
	i = 4;
	while (--i > -1)
	{
		if (out_mtrx[i][attr[1]] > highest)
		{
			highest = out_mtrx[i][attr[1]];
			count++;
		}
		if (out_mtrx[i][attr[1]] == -1)
			check = 1;
	}
	if (check == 0 && count != in_mtrx[1][attr[1]])
		return (1);
	return (0);
}
