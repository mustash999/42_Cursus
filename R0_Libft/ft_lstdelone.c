/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshorrab <mshorrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 15:15:02 by mshorrab          #+#    #+#             */
/*   Updated: 2023/11/19 09:26:06 by mshorrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	if (del)
		del(lst->content);
	free(lst);
}

/*
void custom_del(void *content) {
	// Assuming that the content is dynamically allocated (e.g., using malloc)
	free(content);
}

int main() {
	t_list *node = ft_lstnew("data");
	printf("%s\n", (char *)node->content);

	ft_lstadd_front(&node, ft_lstnew("hello2"));
	printf("%s\n", (char *)node->content);

	// Call ft_lstdelone to free the last node and its content
	ft_lstdelone(ft_lstlast(node), &custom_del);

	return 0;
}
*/