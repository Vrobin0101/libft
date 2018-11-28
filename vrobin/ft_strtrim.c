/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrobin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 15:39:13 by vrobin            #+#    #+#             */
/*   Updated: 2018/11/23 11:28:30 by vrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_len(char const *s, int len)
{
	int i;

	i = 0;
	while ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n') && s[i])
	{
		len--;
		i++;
	}
	while (s[i + 1])
		i++;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
	{
		len--;
		i--;
	}
	return (len);
}

char			*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		len;
	char	*str;

	i = 0;
	j = 0;
	str = NULL;
	if (s == NULL)
		return (NULL);
	len = ft_len(s, ft_strlen(s));
	if (!(str = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n') && s[i])
		i++;
	while (s[i])
	{
		str[j++] = s[i];
		i++;
	}
	str[j] = '\0';
	j--;
	while (str[j] == ' ' || str[j] == '\t' || str[j] == '\n')
		str[j--] = '\0';
	return (str);
}
