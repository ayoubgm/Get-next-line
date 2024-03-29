/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gayoub <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 09:35:51 by gayoub            #+#    #+#             */
/*   Updated: 2019/04/11 16:54:00 by gayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s1)
{
	int		len;
	char	*strcpy;

	len = 0;
	while (s1[len])
		len++;
	if (!(strcpy = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	ft_strcpy(strcpy, s1);
	return (strcpy);
}
