/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdemay <tdemay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:01:41 by tdemay            #+#    #+#             */
/*   Updated: 2013/11/19 16:01:42 by tdemay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*tmp1;
	const unsigned char	*tmp2;
	size_t				i;

	tmp1 = s1;
	tmp2 = s2;
	i = 0;
	while (i < n)
	{
		if (*tmp1 != *tmp2)
		{
			return (*tmp1 - *tmp2);
		}
		else
		{
			tmp1++;
			tmp2++;
		}
		i++;
	}
	return (0);
}
