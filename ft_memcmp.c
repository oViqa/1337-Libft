/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouh <hel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 23:19:40 by hel-bouh          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/10/24 21:37:20 by hel-bouh         ###   ########.fr       */
=======
/*   Updated: 2024/10/22 23:20:36 by hel-bouh         ###   ########.fr       */
>>>>>>> 0c3203845d7b0b5db3cbae7781b182490e1794df
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

<<<<<<< HEAD
int	ft_memcmp(const void *s1, const void *s2, size_t n)
=======
int	memcmp(const void *s1, const void *s2, size_t n)
>>>>>>> 0c3203845d7b0b5db3cbae7781b182490e1794df
{
	const unsigned char	*str1;
	const unsigned char	*str2;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	while (n > 0)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
		n--;
	}
	return (0);
}
