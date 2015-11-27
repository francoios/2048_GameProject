/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdemay <tdemay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/25 13:05:45 by tdemay            #+#    #+#             */
/*   Updated: 2015/01/26 11:22:36 by tdemay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*tmp;

	if ((tmp = (t_list*)malloc(sizeof(t_list))))
	{
		if (!content)
		{
			tmp->content = NULL;
			tmp->content_size = 0;
		}
		else
		{
			tmp->content = (void *)content;
			tmp->content_size = content_size;
		}
		return (tmp);
	}
	return (NULL);
}
