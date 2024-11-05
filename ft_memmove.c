/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouh <hel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:48:08 by hel-bouh          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/10/24 21:37:28 by hel-bouh         ###   ########.fr       */
=======
/*   Updated: 2024/10/21 15:48:42 by hel-bouh         ###   ########.fr       */
>>>>>>> 0c3203845d7b0b5db3cbae7781b182490e1794df
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

<<<<<<< HEAD
void	*ft_memmove(void *dest, const void *src, size_t count)
{
	char	*tmp;
	char	*s;

	if (dest <= src || (src + count) <= dest)
	{
		ft_memcpy(dest, src, count);
=======
void	*memmove(void *dest, const void *src, size_t count)
{
	char *tmp, *s;

	if (dest <= src || (src + count) <= dest)
	{
		memcpy(dest, src, count);
>>>>>>> 0c3203845d7b0b5db3cbae7781b182490e1794df
	}
	else
	{
		tmp = (char *)dest + count;
		s = (char *)src + count;
		while (count--)
			*--tmp = *--s;
	}
<<<<<<< HEAD
	return (dest);
}
=======

	return (dest);
}
>>>>>>> 0c3203845d7b0b5db3cbae7781b182490e1794df
