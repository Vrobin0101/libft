/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrobin <vrobin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 10:56:13 by vrobin            #+#    #+#             */
/*   Updated: 2019/11/06 10:56:21 by vrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	j = 0;
	if (!*needle && !*haystack)
		return ((char*)haystack);
	while (haystack[j])
	{
		i = 0;
		while (needle[i] && haystack[j + i] == needle[i] && (i + j) < len)
			i++;
		if (needle[i] == '\0')
			return ((char*)&haystack[j]);
		j++;
	}
	return (NULL);
}
