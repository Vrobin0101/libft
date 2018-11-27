/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrobin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 11:27:22 by vrobin            #+#    #+#             */
/*   Updated: 2018/11/26 15:23:51 by vrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	if (!((char*)s1 || (char*)s2))
		return (0);
	str1 = (unsigned char*)s1;
	str2 = (unsigned char*)s2;
	if (n != 0)
	{
		while (i < n)
		{
			if (str1[i] != str2[i])
				return (str1[i] - str2[i]);
			i++;
		}
	}
	return (0);
}
