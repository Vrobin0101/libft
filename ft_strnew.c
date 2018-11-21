/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrobin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 14:11:39 by vrobin            #+#    #+#             */
/*   Updated: 2018/11/19 15:19:00 by vrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	unsigned int	i;
	char			*str;

	i = 0;
	if (!(str = (char*)malloc(sizeof(char) * size + 1)))
		return (NULL);
	while (i < size)
		(str[i++] = '\0');
	str[i] = '\0';
	return (str);
}
