/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdemay <tdemay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:00:20 by tdemay            #+#    #+#             */
/*   Updated: 2015/01/24 18:22:48 by tdemay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	char		*q;
	const char	*p;
	char		ch;

	q = s1;
	p = s2;
	while (n--)
	{
		ch = *p++;
		*q++ = ch;
		if (ch == (char)c)
			return (q);
	}
	return (NULL);
}
