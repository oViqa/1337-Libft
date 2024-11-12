/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstback_back_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viqa <viqa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 19:34:15 by viqa              #+#    #+#             */
/*   Updated: 2024/11/12 19:51:17 by viqa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *new_lst;
    new_lst = *lst;

    int i;
    i = 0;
    
    if (*lst == NULL) {
        *lst = new;
        return;
    }
    while(new_lst->next != NULL)
    {
        
        new_lst = new_lst->next;
        i++;
    }
    new_lst->next = new;
}


int main() {
    // Create a new list
    t_list *head = NULL;

    // Create some nodes
    t_list *node1 = ft_lstnew(strdup("Node 1"));
    t_list *node2 = ft_lstnew(strdup("Node 2"));
    t_list *node3 = ft_lstnew(strdup("Node 3"));

    // Add nodes to the back of the list
    ft_lstadd_back(&head, node1);
    ft_lstadd_back(&head, node2);
    ft_lstadd_back(&head, node3);

    // Print the list
    t_list *current = head;
    while (current != NULL) {
        printf("%s\n", (char *)current->content);
        current = current->next;
    }

    // Cleanup the list
    //ft_lstclear(&head, free);

    return 0;
}

