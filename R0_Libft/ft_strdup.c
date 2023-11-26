/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshorrab <mshorrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 10:26:00 by mshorrab          #+#    #+#             */
/*   Updated: 2023/11/22 00:16:56 by mshorrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		len;
	int		i;
	char	*duplicate;

	len = 0;
	while (src[len])
		len++;
	duplicate = NULL;
	duplicate = malloc(sizeof(char) * (len + 1));
	if (!(duplicate))
		return (NULL);
	i = 0;
	while (i <= len)
	{
		duplicate[i] = src[i];
		i++;
	}
	return (duplicate);
}

/*
# include <stdio.h>
int main()
{
	char *str = "Hello World!";
	char *str2 = ft_strdup(str);
	printf("%s\n", str2);
	free(str2);
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <string_to_duplicate>\n", argv[0]);
        return EXIT_FAILURE;
    }

    const char *inputString = argv[1];

    // Using strdup
    char *strdupResult = strdup(inputString);
    if (strdupResult == NULL) {
        perror("strdup");
        return EXIT_FAILURE;
    }

    // Using ft_strdup
    char *ftStrdupResult = ft_strdup(inputString);
    if (ftStrdupResult == NULL) {
        perror("ft_strdup");
        free(strdupResult); // Free memory allocated by strdup
        return EXIT_FAILURE;
    }

    // Print results
    printf("Original String: %s\n", inputString);
    printf("strdup Result   : %s\n", strdupResult);
    printf("ft_strdup Result: %s\n", ftStrdupResult);

    // Clean up allocated memory
    free(strdupResult);
    free(ftStrdupResult);

    return EXIT_SUCCESS;
}
*/