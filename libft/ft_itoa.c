/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdemay <tdemay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:04:32 by tdemay            #+#    #+#             */
/*   Updated: 2015/01/24 18:22:24 by tdemay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	reverse_string(char *str)
{
	char	c;
	char	*p;
	char	*q;

	p = str;
	if (!p)
		return ;
	q = p + 1;
	if (*q == '\0')
		return ;
	c = *p;
	reverse_string(q);
	while (*q != '\0')
	{
		*p = *q;
		p++;
		q++;
	}
	*p = c;
}

char		*ft_itoa(int nb)
{
	char	*str;
	int		i;
	int		signe;

	str = ft_strnew(33);
	i = 0;
	signe = ((nb > 0) ? 0 : 1);
	if (str != NULL)
	{
		if (!nb)
			return (ft_strjoin(str, "0"));
		if (nb > 0)
			nb = -nb;
		while (nb != 0)
		{
			str[i++] = -(nb % 10) + '0';
			nb = nb / 10;
		}
		if (signe)
			str[i++] = '-';
		reverse_string(str);
	}
	return (str);
}
