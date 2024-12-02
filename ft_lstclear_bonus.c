/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouh <hel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 11:43:34 by hel-bouh          #+#    #+#             */
/*   Updated: 2024/11/17 18:10:33 by hel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (lst == NULL || del == NULL)
		return ;
	while (*lst != NULL)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}

// void	ll(void)
// {
// 	system("leaks a.out");
// }

// int main(void) {
//     // Create a new list
// 	atexit(ll);
//     t_list *list = ft_lstnew(strdup("First"));
//     ft_lstadd_back(&list, ft_lstnew(strdup("Second")));
//     ft_lstadd_back(&list, ft_lstnew(strdup("Third")));

//     ft_lstclear(&list, del_content);
//     if (list == NULL)
//         printf("List cleared successfully\n");
//     else
//         printf("List not cleared\n");

//     return (0);
// }
