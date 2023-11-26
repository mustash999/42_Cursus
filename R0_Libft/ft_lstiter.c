/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshorrab <mshorrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 15:09:20 by mshorrab          #+#    #+#             */
/*   Updated: 2023/11/19 09:22:34 by mshorrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		(*f)(lst -> content);
		lst = lst -> next;
	}
}

/*
#include <stdio.h>
void custom_f(void *content)
{
	printf("%s\n", (char *)content);
}

int main()
{
	t_list *node = ft_lstnew("data");
	

	ft_lstadd_front(&node, ft_lstnew("hello2"));
	

	// Call ft_lstiter to print the content of each node
	ft_lstiter(node, &custom_f);

	return 0;
}
*/