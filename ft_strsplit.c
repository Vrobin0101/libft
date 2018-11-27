/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrobin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 11:43:02 by vrobin            #+#    #+#             */
/*   Updated: 2018/11/26 14:45:24 by vrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

static int			ft_count_words(char *str, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if ((str[i] != c) && (str[i] == 0 ||
					str[i + 1] == c || str[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static int			ft_charlen(char *str, char c)
{
	int i;
	int cpt;

	cpt = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] == c)
			i++;
		while (str[i] != c)
		{
			i++;
			cpt++;
			if (str[i] == '\0')
				break ;
		}
		break ;
	}
	return (cpt);
}

static char			*ft_nolimit(char *str, char c)
{
	while (*str == c && *str != '\0')
		str++;
	return (str);
}

static char			*ft_strndup(char *s1, int len)
{
	int		i;
	char	*tab;

	i = 0;
	tab = NULL;
	if (!(tab = (char*)malloc(sizeof(char) * len + 1)))
		return (tab);
	while (i < len)
	{
		tab[i] = s1[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

char				**ft_strsplit(char const *s, char c)
{
	int		i;
	int		nb_char;
	int		nb_words;
	char	**tab;
	char	*str;

	i = 0;
	if (s == NULL)
		return (NULL);
	nb_char = 0;
	str = (char*)s;
	nb_words = ft_count_words(str, c);
	tab = NULL;
	if (!(tab = (char**)malloc(sizeof(*tab) * (nb_words + 1))))
		return (NULL);
	while (i < nb_words)
	{
		str = ft_nolimit(str, c);
		str = str + nb_char;
		nb_char = ft_charlen(str, c);
		str = ft_nolimit(str, c);
		tab[i++] = ft_strndup(str, nb_char);
	}
	tab[i] = NULL;
	return (tab);
}
