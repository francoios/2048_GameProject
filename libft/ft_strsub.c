/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdemay <tdemay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:04:32 by tdemay            #+#    #+#             */
/*   Updated: 2013/11/19 16:04:32 by tdemay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*fresh_cpy;
	size_t	i;

	fresh_cpy = (char *)malloc((len + 1) * sizeof(char));
	if (len && s)
	{
		i = 0;
		if (fresh_cpy && (len <= ft_strlen(s)))
		{
			while (s[start] && i < len)
			{
				fresh_cpy[i] = s[start];
				start++;
				i++;
			}
			fresh_cpy[i] = '\0';
		}
	}
	return (fresh_cpy);
}
