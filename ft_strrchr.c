/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouh <hel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 04:31:10 by hel-bouh          #+#    #+#             */
/*   Updated: 2024/10/23 04:39:20 by hel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
<<<<<<< HEAD

char	*ft_strrchr(const char *s, int c)
{
	const char	*last;
=======
char	*ft_strrchr(const char *s, int c)
{
	const char *last;
>>>>>>> 0c3203845d7b0b5db3cbae7781b182490e1794df

	last = NULL;
	while (*s)
	{
		if (*s == (char)c)
			last = s;
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return ((char *)last);
}
