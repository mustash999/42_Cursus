/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshorrab <mshorrab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 15:55:42 by mshorrab          #+#    #+#             */
/*   Updated: 2023/11/19 09:13:26 by mshorrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst -> next;
		i++;
	}
	return (i);
}

/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Create a linked list
    t_list *list = NULL;

    // Create nodes using ft_lstnew
    t_list *node1 = ft_lstnew("Node 1");
    t_list *node2 = ft_lstnew("Node 2");
    t_list *node3 = ft_lstnew("Node 3");
	t_list *node4 = ft_lstnew("Node 4");

    if (!node1 || !node2 || !node3)
    {
        fprintf(stderr, "Memory allocation error\n");
        return EXIT_FAILURE;
    }

    // Add nodes to the front of the list
    ft_lstadd_front(&list, node3);
    ft_lstadd_front(&list, node2);
    ft_lstadd_front(&list, node1);
	ft_lstadd_front(&list, node4);

    // Test ft_lstsize
    printf("Size of the list: %d\n", ft_lstsize(list));

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