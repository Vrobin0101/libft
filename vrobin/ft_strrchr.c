/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrobin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 14:15:12 by vrobin            #+#    #+#             */
/*   Updated: 2018/11/21 15:08:07 by vrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	unsigned int	j;
	char			*pos;

	i = 0;
	j = ft_strlen(s);
	pos = NULL;
	if ((char)c == '\0' && s[i + 1] == '\0')
		return ((char*)s++);
	while (i <= j)
	{
		if (s[i] == (char)c)
			pos = (char*)&s[i];
		i++;
	}
	return (pos);
}
