/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viqa <viqa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 19:06:02 by viqa              #+#    #+#             */
/*   Updated: 2024/11/12 19:26:52 by viqa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
t_list *ft_lstnew(void *content)
{
    if(!content)
        return(NULL);
    t_list  *list;
    list = malloc(sizeof(t_list));

    list->content = ft_strdup(content);
    list->next = NULL;
    return(list);
}
/*
int main()
{
    t_list *new;
    new = ft_lstnew("hello");
    printf("%s",(char *)new->content);
    
}
*/