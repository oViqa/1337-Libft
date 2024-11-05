/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouh <hel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:21:01 by hel-bouh          #+#    #+#             */
/*   Updated: 2024/11/05 17:32:55 by hel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	i;
	size_t	j;
	size_t	k;

	tab = (char **)malloc(sizeof(char *) * (ft_strlen(s) + 1));
	if (!tab)
		return (NULL);
	i = -1;
	j = 0;
	while (s[++i])
	{
		if (s[i] != c)
		{
			k = 0;
			tab[j] = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
			if (!tab[j])
				return (NULL);
			while (s[i] && s[i] != c)
				tab[j][k++] = s[i++];
			tab[j][k] = 0;
			j++;
		}
	}
	return (tab[j] = 0, tab);
}
