/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouh <hel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 19:34:15 by viqa              #+#    #+#             */
/*   Updated: 2024/11/17 10:27:17 by hel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*new_lst;
	int		i;

	new_lst = *lst;
	i = 0;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	while (new_lst->next != NULL)
	{
		new_lst = new_lst->next;
		i++;
	}
	new_lst->next = new;
}
