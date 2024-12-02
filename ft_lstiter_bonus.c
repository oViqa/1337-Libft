/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouh <hel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 17:06:33 by hel-bouh          #+#    #+#             */
/*   Updated: 2024/11/18 18:36:57 by hel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL || f == NULL)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
// void print_content(void *content)
// {
//     printf("%s\n", (char *)content);
// }

// int main()
// {
// 	t_list *lst = ft_lstnew("lala");

// 	ft_lstadd_back(&lst, ft_lstnew("morah"));
// 	ft_lstadd_back(&lst, ft_lstnew("li morahhhh"));
// 	ft_lstiter(lst, print_content);
// }