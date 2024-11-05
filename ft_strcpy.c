/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouh <hel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 08:30:58 by hel-bouh          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/10/24 20:42:16 by hel-bouh         ###   ########.fr       */
=======
/*   Updated: 2024/10/23 04:38:59 by hel-bouh         ###   ########.fr       */
>>>>>>> 0c3203845d7b0b5db3cbae7781b182490e1794df
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
<<<<<<< HEAD

char	*ft_strcpy(char *dest, char *src)

{
	char	*ret_ptr;
=======
char	*ft_strcpy(char *dest, char *src)

{
	char *ret_ptr;
>>>>>>> 0c3203845d7b0b5db3cbae7781b182490e1794df

	ret_ptr = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ret_ptr);
}
