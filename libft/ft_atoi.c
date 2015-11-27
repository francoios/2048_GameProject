/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdemay <tdemay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:04:41 by tdemay            #+#    #+#             */
/*   Updated: 2013/11/19 16:04:41 by tdemay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_spe(int c)
{
	char	*buf;
	int		i;

	buf = "\n\v\t\r\f ";
	i = 0;
	while (i < 6)
	{
		if (buf[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int				ft_atoi(const char *str)
{
	int		nb;
	int		neg;

	nb = 0;
	neg = 1;
	while (ft_spe(*str))
		str++;
	while ((*str == '+' || *str == '-') && neg == 1)
	{
		if (*str == '-' || *(str + 1) == '+')
		{
			neg = -1;
			if (*(str - 1) == '+')
				str--;
		}
		str++;
	}
	while (*str && ft_isdigit(*str))
	{
		nb = nb * 10 + (*str) - '0';
		str++;
	}
	return (nb * neg);
}
