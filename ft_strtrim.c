/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrobin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 15:39:13 by vrobin            #+#    #+#             */
/*   Updated: 2018/11/21 16:14:40 by vrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	if (!(str = (char*)malloc(sizeof(char) * ft_strlen(s))))
		return (NULL);
	while ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ',') && s[i])
		i++;
	while (s[i])
	{
		str[j] = s[i];
		i++;
		j++;
	}
	str[j] = '\0';
	j--;
	while (str[j] == ' ' || str[j] == '\t' || str[j] == '\n' || str[j] == ',')
		str[j--] = '\0';
	return (str);
}
