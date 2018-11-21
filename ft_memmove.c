/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrobin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 15:09:34 by vrobin            #+#    #+#             */
/*   Updated: 2018/11/19 15:48:07 by vrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *dstcopy;
	char *srccopy;

	dstcopy = (char*)dst;
	srccopy = (char*)src;
	if (len == 0)
		return (dst);
	if (dstcopy < srccopy)
		while (len--)
			*dstcopy++ = *srccopy++;
	else
	{
		dstcopy += len;
		srccopy += len;
		while (len--)
			*--dstcopy = *--srccopy;
	}
	return (dst);
}
