/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gayoub <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 21:05:55 by gayoub            #+#    #+#             */
/*   Updated: 2019/04/15 23:03:41 by gayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*start;
	t_list	*curr;

	if (lst && f)
	{
		start = (*f)(lst);
		curr = start;
		while (lst->next)
		{
			lst = lst->next;
			curr->next = (*f)(lst);
			curr = curr->next;
		}
		return (start);
	}
	return (NULL);
}
