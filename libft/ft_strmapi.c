/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdemay <tdemay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:04:32 by tdemay            #+#    #+#             */
/*   Updated: 2013/11/19 16:04:32 by tdemay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*tmp;
	int		i;

	i = 0;
	if (s && f)
	{
		tmp = (char*)malloc(ft_strlen(s) * sizeof(char));
		if (tmp)
		{
			while (s[i] != '\0')
			{
				tmp[i] = (*f)(i, s[i]);
				i++;
			}
		}
	}
	return (tmp);
}
