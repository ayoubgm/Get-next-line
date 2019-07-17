/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gayoub <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 22:30:10 by gayoub            #+#    #+#             */
/*   Updated: 2019/04/18 00:46:10 by gayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char		*ft_strchr(const char *s, int c)
{
	size_t	i;
	size_t	size;

	i = 0;
	if (s)
	{
		size = ft_strlen(s);
		while (i <= size)
		{
			if (s[i] == (char)c)
				return (char *)s + i;
			i++;
		}
	}
	return (NULL);
}
