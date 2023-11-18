/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshorrab <mshorrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 10:26:00 by mshorrab          #+#    #+#             */
/*   Updated: 2023/07/31 17:08:49 by mshorrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*duplicate;

	len = 0;
	if (src == 0)
		return (0);
	while (src[len] != '\0')
		len++;
	duplicate = (char *)malloc((len + 1) * sizeof(char));
	if (duplicate == 0)
		return (0);
	i = 0;
	while (i <= len)
	{
		duplicate[i] = src[i];
		i++;
	}
	return (duplicate);
}

/*
#include <stdio.h>
#include <stdlib.h>

// Prototype of ft_strdup function
char *ft_strdup(char *src);

int main() {
    char *source_string = "Hello, world!";
    char *duplicate_string = ft_strdup(source_string);

    if (duplicate_string != NULL) {
        printf("Source string: %s\n", source_string);
        printf("Duplicate string: %s\n", duplicate_string);

        // Remember to free the dynamically allocated memory when done
        free(duplicate_string);
    } else {
        printf("Memory allocation failed.\n");
    }
    return 0;
}
*/