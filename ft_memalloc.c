/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrobin <vrobin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 10:51:35 by vrobin            #+#    #+#             */
/*   Updated: 2019/11/06 10:58:31 by vrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	size_t *dest;

	if (!(dest = (size_t *)malloc(sizeof(size_t) * size)))
		return (NULL);
	ft_memset(dest, 0, size);
	return (dest);
}
