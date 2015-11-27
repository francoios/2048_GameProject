/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdemay <tdemay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:04:32 by tdemay            #+#    #+#             */
/*   Updated: 2015/01/24 18:27:39 by tdemay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int	lens1;
	int	lens2;
	int	i;

	if (s1 && s2)
	{
		lens1 = ft_strlen(s1);
		lens2 = ft_strlen(s2);
		i = 0;
		if (lens1 == lens2)
		{
			while (s1[i] != '\0')
			{
				if (s1[i] != s2[i])
					return (0);
				i++;
			}
		}
		else
		{
			return (0);
		}
		return (1);
	}
	return (0);
}
