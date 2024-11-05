/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 11:56:45 by hel-bouh          #+#    #+#             */
/*   Updated: 2024/09/04 11:56:47 by hel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*og_dest;

	og_dest = dest;
	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (og_dest);
}

/*#include	<stdio.h>
int	main(void)
{
	char	dest[50]= "hi";
	char src1[]="ba";
	printf("%s\n", ft_strcat(dest, src1));
	return (0);
}*/
