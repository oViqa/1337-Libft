/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouh <hel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 10:31:07 by hel-bouh          #+#    #+#             */
/*   Updated: 2024/11/17 11:18:26 by hel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

// int main()
// {
// 	t_list *node1 = ft_lstnew("gfgh");
// 	t_list *node2 = ft_lstnew("vgng");
// 	ft_lstadd_back(&node1 , node2);

// 	printf("%s\n",(ft_lstlast(node1))->content);
// }