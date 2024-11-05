/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouh <hel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 22:36:48 by hel-bouh          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/10/24 21:58:20 by hel-bouh         ###   ########.fr       */
=======
/*   Updated: 2024/10/22 23:08:03 by hel-bouh         ###   ########.fr       */
>>>>>>> 0c3203845d7b0b5db3cbae7781b182490e1794df
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

<<<<<<< HEAD
char	*ft_strdup(const char *s1)
=======
char	*strndup(const char *s1)
>>>>>>> 0c3203845d7b0b5db3cbae7781b182490e1794df
{
	char	*str;
	int		l;
	int		i;

	i = 0;
<<<<<<< HEAD
	l = ft_strlen(s1);
	str = malloc(sizeof(char) * (l + 1));
	if (!str)
		return (NULL);
=======
	l = ft_strlen(str);
	str = malloc(l + 1);
>>>>>>> 0c3203845d7b0b5db3cbae7781b182490e1794df
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
