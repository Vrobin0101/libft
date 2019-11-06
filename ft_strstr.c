/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrobin <vrobin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 10:56:32 by vrobin            #+#    #+#             */
/*   Updated: 2019/11/06 10:56:36 by vrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char *str1;
	char *str2;

	if (!*needle)
		return ((char*)haystack);
	while (*haystack)
	{
		str1 = (char *)haystack;
		str2 = (char *)needle;
		while (*str2 && *haystack == *str2)
		{
			haystack++;
			str2++;
		}
		if (!*str2)
			return (str1);
		haystack = str1 + 1;
	}
	return (NULL);
}
