/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouh <hel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:38:41 by hel-bouh          #+#    #+#             */
/*   Updated: 2024/11/18 14:43:06 by hel-bouh         ###   ########.fr       */
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

// #include <fcntl.h>
// #include <stdio.h>
// int main()
// {
// 	int fd = open("ana_nadia.txt", O_CREAT | O_WRONLY );
// 	if (fd == -1)
// 	{
// 		printf("nti machi nadia");
// 	}
// 	printf("%d", fd);
// 	ft_putstr_fd("nti nadia",fd);
// 	write(2, "test", 4);
// }