/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouh <hel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:09:54 by hel-bouh          #+#    #+#             */
/*   Updated: 2024/11/16 10:49:15 by hel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// s = mem area ; c = bite to search for ; n = size
// memchr = find a char in an area of a mem
void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p = s;

	while (n-- != 0)
	{
		if ((unsigned char)c == *p++)
			return ((void *)(p - 1));
	}
	return (NULL);
}

// int main ()
// {
//   char  s[6] = "hello";
//   s[6] = '\0';
//   char c = 'e';
//   printf("%s\n", ft_memchr(s, c, 5));
// }