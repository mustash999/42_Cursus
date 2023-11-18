/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshorrab <mshorrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 00:36:35 by Mustash           #+#    #+#             */
/*   Updated: 2023/08/03 15:11:57 by mshorrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		len;
	char	*copy;
	int		i;

	len = 0;
	while (src[len])
		len++;
	copy = (char *)malloc((len + 1) * sizeof(char));
	if (copy == NULL)
		return (NULL);
	i = 0;
	while (i <= len)
	{
		copy[i] = src[i];
		i++;
	}
	return (copy);
}

void	free_stock(struct s_stock_str *stock, int count)
{
	int	j;

	j = 0;
	while (j < count)
	{
		free(stock[j].copy);
		j++;
	}
	free(stock);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	int					size;
	struct s_stock_str	*stock;

	if (ac <= 0 || av == NULL)
		return (NULL);
	stock = (struct s_stock_str *)malloc(ac * sizeof(struct s_stock_str));
	if (stock == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		size = 0;
		while (av[i][size])
			size++;
		stock[i].size = size;
		stock[i].str = av[i];
		stock[i].copy = ft_strdup(av[i]);
		if (stock[i].copy == NULL)
			return (free_stock(stock, i), NULL);
		i++;
	}
	return (stock);
}
