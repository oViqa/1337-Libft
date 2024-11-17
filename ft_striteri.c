/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouh <hel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:24:07 by hel-bouh          #+#    #+#             */
/*   Updated: 2024/11/16 13:43:56 by hel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// #include <stdio.h>
// void banana(unsigned int i, char *c)
// {
// 	i =0;
// 	*c = *c -32;
// }

// int main()
// {
//     void (*f)= &banana;
// 	char s[] = "ssasasaa";
// 	ft_striteri(s,f);
// 	printf("%s", s);
// }