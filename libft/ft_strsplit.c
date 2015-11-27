/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdemay <tdemay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:03:07 by tdemay            #+#    #+#             */
/*   Updated: 2015/02/28 15:30:12 by tdemay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		**ft_modtab(char **tab, char *mot, int len)
{
	char	**tmp;
	int		i;
	int		k;

	tmp = (char **)malloc((len + 1) * sizeof(char *));
	if (tmp)
	{
		ft_bzero(tmp, (len + 1));
		i = 0;
		k = 0;
		while (tab && (i < len))
		{
			if (tab[i])
			{
				tmp[k] = tab[i];
				tab[i] = NULL;
				k++;
			}
			i++;
		}
		tmp[k] = mot;
		tmp[k + 1] = NULL;
	}
	return (tmp);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		loop;
	char	*tmp_mot;
	char	**tmp_tab;

	tmp_tab = ft_modtab(NULL, NULL, 1);
	tmp_mot = NULL;
	loop = 0;
	while (s && *s && tmp_tab)
	{
		loop++;
		i = 0;
		while (*s == c && *s != '\0')
			s++;
		while (s[i] != c && s[i] != '\0')
			i++;
		if (i != 0)
		{
			tmp_mot = ft_strsub(s, 0, i);
			tmp_tab = ft_modtab(tmp_tab, tmp_mot, loop);
		}
		s += i;
	}
	return (tmp_tab);
}
