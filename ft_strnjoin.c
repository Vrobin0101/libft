/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrobin <vrobin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 10:56:09 by vrobin            #+#    #+#             */
/*   Updated: 2019/11/06 10:59:40 by vrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnjoin(char const *s1, char const *s2, size_t n)
{
	char	*cat;
	size_t	catlen;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	catlen = ft_strlen(s1) + ft_strlen(s2);
	i = 0;
	if (!(cat = (char *)malloc(sizeof(char) * catlen + 1)))
		return (NULL);
	while (s1[i] != '\0')
	{
		cat[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0' && j < n)
	{
		cat[i + j] = s2[j];
		j++;
	}
	cat[catlen] = '\0';
	return (cat);
}
