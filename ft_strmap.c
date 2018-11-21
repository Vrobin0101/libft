/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrobin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 14:50:55 by vrobin            #+#    #+#             */
/*   Updated: 2018/11/20 15:18:30 by vrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*result;

	i = 0;
	if (!(result = (char*)malloc(sizeof(char) * ft_strlen(s))))
		return (NULL);
	if (s == NULL || f == NULL)
		return (NULL);
	while (s[i])
	{
		result[i] = f(s[i]);
		i++;
	}
	return (result);
}
