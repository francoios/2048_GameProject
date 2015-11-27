/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdemay <tdemay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:03:07 by tdemay            #+#    #+#             */
/*   Updated: 2013/11/19 16:03:08 by tdemay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*chr;

	chr = NULL;
	if (*s == (char)c)
		chr = (char*)s;
	while (*s)
	{
		if (*s == c)
			chr = (char*)s;
		s++;
	}
	if (c == '\0')
		chr = (char*)s;
	return (chr);
}
