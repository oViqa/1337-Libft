/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viqa <viqa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 19:09:51 by viqa              #+#    #+#             */
/*   Updated: 2024/11/12 19:13:01 by viqa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{    
    int a;
    a = 0;

    if (!lst)
        return 0;
    while(lst != NULL)
    {
        lst = lst->next;
        a++;
    }
    return (a);
}