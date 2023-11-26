/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshorrab <mshorrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 15:10:33 by mshorrab          #+#    #+#             */
/*   Updated: 2023/11/19 09:26:44 by mshorrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		(*lst) = tmp;
	}
}
/*
void custom_del(void *content)
{
	// Assuming that the content is dynamically allocated (e.g., using malloc)
	free(content);
}


int main()
{
	t_list *node = ft_lstnew("data");
	printf("%s\n", (char *)node->content);

	ft_lstadd_front(&node, ft_lstnew("hello2"));
	printf("%s\n", (char *)node->content);

	// Call ft_lstclear to free the entire list and its content
	ft_lstclear(&node, &custom_del);

	return 0;
}*/