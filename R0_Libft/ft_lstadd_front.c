/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshorrab <mshorrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 15:56:48 by mshorrab          #+#    #+#             */
/*   Updated: 2023/11/19 09:27:23 by mshorrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new -> next = *lst;
	*lst = new;
}

/*
#include <stdio.h>
int main()
{
	t_list	*base = ft_lstnew("content");
	t_list	*new = ft_lstnew("contentA");

	ft_lstadd_front(&base, ft_lstnew("content2"));
	ft_lstadd_front(&base, ft_lstnew("content3"));
	ft_lstadd_front(&base, ft_lstnew("content4"));
	ft_lstadd_front(&new, ft_lstnew("contentB"));
	ft_lstadd_front(&new, ft_lstnew("contentC"));
	ft_lstadd_front(&new, ft_lstnew("contentD"));
	
	t_list *newPtr = new;
	
	
	
    while (newPtr)
    {
        ft_lstadd_front(&base, ft_lstnew(newPtr->content));
        newPtr = newPtr->next;
    }
	
	while (base)
	{
		printf("%s\n", base -> content);
		base = base -> next;
	}
}

int main(void)
{
    // Create a linked list
    t_list *list = NULL;

    // Create nodes using ft_lstnew
    t_list *node1 = ft_lstnew("Node 1");
    t_list *node2 = ft_lstnew("Node 2");
    t_list *node3 = ft_lstnew("Node 3");

    if (!node1 || !node2 || !node3)
    {
        fprintf(stderr, "Memory allocation error\n");
        return EXIT_FAILURE;
    }

    // Add nodes to the front of the list
    ft_lstadd_front(&list, node3);
    ft_lstadd_front(&node3, node2);
    ft_lstadd_front(&node3, node1);

    // Print the linked list
    t_list *current = list;
    while (current != NULL)
    {
        printf("%s -> ", (char *)current->content);
        current = current->next;
    }
    printf("NULL\n");

    // Clean up memory
    while (list != NULL)
    {
        t_list *temp = list;
        list = list->next;
        free(temp);
    }

    return EXIT_SUCCESS;
}
*/