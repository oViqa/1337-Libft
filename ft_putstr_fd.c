/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_putstr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouh <hel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:38:41 by hel-bouh          #+#    #+#             */
/*   Updated: 2024/11/12 11:57:11 by hel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	if (!s)
		return ;
	if (fd < 0)
		return ;
	write(fd, s, ft_strlen(s));
}
// int main()
// {
// 	ft_putstr_fd("lalalalalala",-9);
// }