/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdemay <tdemay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/25 13:24:04 by tdemay            #+#    #+#             */
/*   Updated: 2015/01/26 11:21:26 by tdemay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*curnew;
	t_list		*curnext;

	if (!lst || !f)
		return (NULL);
	curnext = ft_lstmap(lst->next, f);
	lst = (*f)(lst);
	if ((curnew = ft_lstnew(lst->content, lst->content_size)))
		curnew->next = curnext;
	else
		return (NULL);
	return (curnew);
}
