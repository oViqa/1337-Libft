/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouh <hel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 10:51:35 by hel-bouh          #+#    #+#             */
/*   Updated: 2024/10/23 04:38:38 by hel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
<<<<<<< HEAD

=======
>>>>>>> 0c3203845d7b0b5db3cbae7781b182490e1794df
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*og_dest;

	og_dest = dest;
	while (*dest != '\0')
	{
		dest++;
	}
<<<<<<< HEAD
	while (nb > 0 && *src != '\0')
=======
	while (nb > 0 && *src != '\0' )
>>>>>>> 0c3203845d7b0b5db3cbae7781b182490e1794df
	{
		*dest = *src;
		dest++;
		src++;
		nb--;
	}
	*dest = '\0';
	return (og_dest);
}
