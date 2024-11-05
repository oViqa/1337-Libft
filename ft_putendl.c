/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-bouh <hel-bouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:28:11 by hel-bouh          #+#    #+#             */
/*   Updated: 2024/11/05 13:47:36 by hel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void    ft_putendl(char const *s)
{
    ft_putstr(s);
    write(1, "\n", 1);
}

int main(void)
{
    ft_putendl("Hello World");
}