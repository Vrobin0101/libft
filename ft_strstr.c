/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrobin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 22:07:18 by vrobin            #+#    #+#             */
/*   Updated: 2018/11/19 12:30:53 by vrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *haystack, const char *needle)
{
	const char *str1;
	const char *str2;

	str1 = NULL;
	str2 = NULL;
	if (!*needle)
		return ((char*)haystack);
	while (*haystack)
	{
		str1 = haystack;
		str2 = needle;
		while (*str2 && *haystack == *str2)
		{
			haystack++;
			str2++;
		}
		if (!*str2)
			return ((char*)str1);
		haystack = str1 + 1;
	}
	return (NULL);
}
