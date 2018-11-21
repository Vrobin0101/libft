/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrobin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 13:05:32 by vrobin            #+#    #+#             */
/*   Updated: 2018/11/20 12:34:06 by vrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = ft_strlen(s) + 1;
	if ((char)c == '\0' && s[i + 1] == '\0')
		return ((char*)s++);
	while (i < j)
	{
		if (s[0] == (char)c)
			return ((char*)(s));
		s++;
		i++;
	}
	return (NULL);
}
