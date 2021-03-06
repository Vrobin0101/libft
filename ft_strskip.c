/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strskip.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrobin <vrobin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 10:56:25 by vrobin            #+#    #+#             */
/*   Updated: 2019/11/06 10:56:28 by vrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strskip(const char *str, char c)
{
	int			i;
	int			j;
	char		*ret;

	i = 0;
	j = 0;
	ret = ft_strnew(ft_strlen(str));
	while (str[i])
	{
		if (str[i] != c)
			break ;
		i++;
	}
	while (str[i])
	{
		ret[j] = str[i];
		j++;
		i++;
	}
	return (ret);
}
