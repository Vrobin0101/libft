/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_llutoa_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrobin <vrobin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 10:51:07 by vrobin            #+#    #+#             */
/*   Updated: 2019/11/06 10:58:23 by vrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int				ft_size(unsigned long long nbr, int base)
{
	int size;

	size = 0;
	while (nbr != 0)
	{
		nbr /= base;
		size++;
	}
	return (size);
}

char					*ft_llutoa_base(unsigned long long value, char *base)
{
	char		*str;
	int			size;
	int			baselength;

	baselength = ft_strlen(base);
	size = ft_size(value, baselength);
	if (value == 0)
		return (ft_strdup("0"));
	if (!(str = (char*)malloc(sizeof(char) * size + 1)))
		return (NULL);
	str[size] = '\0';
	while (size > 0)
	{
		str[size - 1] = base[value % baselength];
		size--;
		value /= baselength;
	}
	return (str);
}
