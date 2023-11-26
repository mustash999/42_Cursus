/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshorrab <mshorrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 16:06:15 by mshorrab          #+#    #+#             */
/*   Updated: 2023/11/22 20:51:27 by mshorrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;

	if (!s || !f)
		return (NULL);
	str = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, (char)s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
#include <stdio.h>

char    map_function(unsigned int index, char c) {
    printf("%d", (int)index);
    if (c >= 'a' && c <= 'z') 
	{
        return ((c - ('a' - 'A')));
    }
    return c;
}


int main() {
    const char *input_string = "Hello, World!";
    
    // Test ft_strmapi with the map_function
    char *result = ft_strmapi(input_string, &map_function);

    // Print the original and mapped strings
    printf("Original String: %s\n", input_string);
    printf("Mapped String  : %s\n", result);

    // Don't forget to free the allocated memory
    free(result);

    return 0;
}

char			*result;
	unsigned int	i;

	if (s == NULL)
		return (NULL);
	result = (char *)malloc((ft_strlen(((char *)s) + 1)) * sizeof(char));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (*s)
	{
		result[i] = f(i, (char) s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);*/