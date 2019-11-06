/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrobin <vrobin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 10:52:07 by vrobin            #+#    #+#             */
/*   Updated: 2019/11/06 10:58:36 by vrobin           ###   ########.fr       */
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
