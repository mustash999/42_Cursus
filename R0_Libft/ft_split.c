/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshorrab <mshorrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 16:07:58 by mshorrab          #+#    #+#             */
/*   Updated: 2023/11/19 00:14:45 by mshorrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	count_words(char const *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s == c)
			in_word = 0;
		else if (!in_word)
		{
			in_word = 1;
			count++;
		}
		s++;
	}
	return (count);
}

void	free_array(char **array)
{
	int	i;

	i = 0;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
}

char	**ft_split(char const *s, char c)
{
	char		**array;
	int			i;
	const char	*start;

	array = (char **)malloc(((count_words(s, c) + 1)) * sizeof(char *));
	i = 0;
	if (array == NULL)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			start = s;
			while (*s && *s != c)
				s++;
			array[i] = ft_substr(start, 0, s - start);
			if (array[i] == NULL)
				return (free_array(array), NULL);
			i++;
		}
		else
			s++;
	}
	array[i] = NULL;
	return (array);
}

/*
#include <stdio.h>
int main() {
	char const *s = "This is a sample string bla bla bla";
	char c = ' ';
	char **result = ft_split(s, c);

	if (result != NULL) {
		for (int i = 0; result[i] != NULL; i++) {
			printf("%s\n", result[i]);
			free(result[i]); // Don't forget to free each string
		}
		free(result); // Free the array of strings
	} else {
		printf("Allocation failed.\n");
	}

	return 0;
}
*/