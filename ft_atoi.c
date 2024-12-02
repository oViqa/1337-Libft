/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouh <hel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:47:26 by hel-bouh          #+#    #+#             */
/*   Updated: 2024/11/18 16:46:15 by hel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\v' || c == '\r' || c == '\f'
		|| c == '\n')
		return (1);
	return (0);
}

static void	ft_sign(const char *str, int *i, int *sign)
{
	if (str[*i] == '-')
	{
		*sign = -1;
		(*i)++;
	}
	else if (str[*i] == '+')
		(*i)++;
}

int	ft_atoi(const char *str)
{
	long long	nb;
	int			sign;
	int			i;

	i = 0;
	sign = 1;
	nb = 0;
	while (ft_space(str[i]))
		i++;
	ft_sign(str, &i, &sign);
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (nb > (LONG_MAX - (str[i] - '0')) / 10)
		{
			if (sign == 1)
				return (-1);
			else
				return (0);
		}
		nb = (nb * 10) + (str[i++] - '0');
	}
	return (nb * sign);
}
