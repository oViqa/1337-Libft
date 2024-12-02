/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouh <hel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 20:27:52 by hel-bouh          #+#    #+#             */
/*   Updated: 2024/11/18 15:03:43 by hel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_elem;
	void	*data;

	new_list = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		data = f(lst->content);
		new_elem = ft_lstnew(data);
		if (!new_elem)
		{
			del(data);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_elem);
		lst = lst->next;
	}
	return (new_list);
}
// void del_content(void *content)
// {
//     free(content);
// }

// void *duplicate_content(void *content)
// {
//     return (strdup((char *)content));
// }

// int main(void) {
//     t_list *list = ft_lstnew(strdup("First"));
//     ft_lstadd_back(&list, ft_lstnew(strdup("Second")));
//     ft_lstadd_back(&list, ft_lstnew(strdup("Third")));

//     t_list *new_list = ft_lstmap(list, duplicate_content, del_content);

//     t_list *temp = new_list;
//     while (temp) {
//         printf("%s\n", (char *)temp->content);
//         temp = temp->next;
//     }

//     ft_lstclear(&list, del_content);
//     ft_lstclear(&new_list, del_content);

//     return (0);
// }