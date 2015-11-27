/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdemay <tdemay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:04:32 by tdemay            #+#    #+#             */
/*   Updated: 2013/11/19 16:04:32 by tdemay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*tmp;

	if (s1 && s2)
	{
		len = (ft_strlen(s1) + ft_strlen(s2) + 1);
		tmp = (char *)malloc(len * sizeof(char));
		if (tmp)
		{
			ft_bzero(tmp, len);
			tmp = ft_strcat(tmp, s1);
			tmp = ft_strcat(tmp, s2);
		}
		return (tmp);
	}
	return (NULL);
}
