/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouh <hel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:48:08 by hel-bouh          #+#    #+#             */
/*   Updated: 2024/10/21 15:48:42 by hel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memmove(void *dest, const void *src, size_t count)
{
	char *tmp, *s;

	if (dest <= src || (src + count) <= dest)
	{
		memcpy(dest, src, count);
	}
	else
	{
		tmp = (char *)dest + count;
		s = (char *)src + count;
		while (count--)
			*--tmp = *--s;
	}

	return (dest);
}