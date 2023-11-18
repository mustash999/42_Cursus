/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshorrab <mshorrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 23:36:25 by mshorrab          #+#    #+#             */
/*   Updated: 2023/11/09 23:58:32 by mshorrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	count;

	if (tab == NULL || f == NULL)
	{
		return (0);
	}
	i = 0;
	count = 0;
	while (tab[i])
	{
		if (f(tab[i]))
			count++;
		i++;
	}
	return (count);
}

/*
# include <stdio.h>

int	ft_is_a(char *str)
{
	if (str[0] == 'a')
		return (1);
	return (0);
}

int main()
{
	char **tab;
	int i;

	tab = (char **)malloc(sizeof(char *) * 4);
	tab[0] = "a";
	tab[1] = "b";
	tab[2] = "c";
	tab[3] = 0;
	i = ft_count_if(tab, &ft_is_a);
	printf("%d", i);
	return (0);
}
*/