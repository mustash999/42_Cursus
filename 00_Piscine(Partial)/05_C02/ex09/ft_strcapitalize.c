/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshorrab <mshorrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 12:42:54 by mshorrab          #+#    #+#             */
/*   Updated: 2023/07/19 10:45:03 by mshorrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	c_is_up_o_nm(char c)
{
	if (c == '\0')
	{
		return (0);
	}
	else if ((c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else if ((c >= '0' && c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	c_alphnm(char c)
{
	if (c == '\0')
	{
		return (0);
	}
	else if (c >= 'a' && c <= 'z' )
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c >= '0' && c <= '9' )
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}

char	*ft_strcapitalize(char *str)
{
	char	*copy;
	char	c;
	char	d;

	copy = str; 
	while (*str != '\0')
	{
		c = *str;
		d = *(str -1);
		if ((c_alphnm(d) == 0) && (c_alphnm(c) == 1) && (c_is_up_o_nm(c) == 0))
		{
			*str = *str - 32;
			str++;
		}
		else
		{
			str++;
		}
	}
	*str = '\0';
	return (copy);
}
