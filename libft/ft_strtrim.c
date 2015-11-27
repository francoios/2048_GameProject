/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdemay <tdemay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:04:32 by tdemay            #+#    #+#             */
/*   Updated: 2015/01/24 18:44:47 by tdemay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_white_s(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}

char			*ft_strtrim(char const *s)
{
	char		*tmp;
	size_t		len;

	if (s)
	{
		tmp = (char *)s;
		while (ft_white_s(*tmp))
		{
			tmp++;
		}
		len = ft_strlen(tmp);
		if (len)
		{
			while (ft_white_s(tmp[--len]) || *tmp == '\0')
				;
			tmp = ft_strsub(tmp, 0, (len + 1));
		}
		else
		{
			tmp = ft_strnew(1);
		}
		return (tmp);
	}
	return (NULL);
}
