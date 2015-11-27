/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdemay <tdemay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:04:09 by tdemay            #+#    #+#             */
/*   Updated: 2015/01/25 12:13:24 by tdemay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	ptr;
	size_t	j;
	size_t	t;

	i = 0;
	ptr = 0;
	t = 0;
	j = 0;
	while (s1[i] != '\0' && i < n)
	{
		if (s2[j] == s1[i])
		{
			if (j == 0)
				ptr = i;
			j++;
		}
		else if (!(j = 0))
			i = t++;
		i++;
		if (s2[j] == '\0')
			return ((char *)(s1 + ptr));
	}
	return (NULL);
}
