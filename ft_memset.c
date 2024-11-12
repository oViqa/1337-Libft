/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouh <hel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 04:37:01 by hel-bouh          #+#    #+#             */
/*   Updated: 2024/11/11 13:00:41 by hel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)str;
	i = 0;
	if (str == NULL)
		return (NULL);
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	// char	str[] =  "JOKE";
// 	// char	str1[] =  "JOKE";
// 	int i = 0;
// 	////////////////////
// 	ft_memset(&i, 5, 2);
// 	ft_memset(&i, 57, 1);

// 	///////////////////
// 	printf("%d\n", i);
// 	// printf("%d\n", memset(str1, 82, 1));
// }

// J O K E
// R O S E
// 00000000 00000000 00000000 00000000
// 00000000 00000000 00000101 00111001
// 00000000 00000000 00000000 01000001
// 00000000 00000000 00111011 01000001
// 01000001