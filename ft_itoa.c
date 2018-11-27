/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrobin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 11:31:02 by vrobin            #+#    #+#             */
/*   Updated: 2018/11/23 12:41:58 by vrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void			ft_isnega(int *n, int *nega)
{
	if (*n < 0)
	{
		*n *= -1;
		*nega = 1;
	}
}

static int			ft_len(int len, int temp)
{
	while (temp /= 10)
		len++;
	return (len);
}

char				*ft_itoa(int n)
{
	int		len;
	int		temp;
	int		nega;
	char	*str;

	len = 2;
	temp = n;
	nega = 0;
	str = NULL;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	ft_isnega(&n, &nega);
	len = ft_len(len, temp);
	len += nega;
	if (!(str = (char*)malloc(sizeof(char) * len)))
		return (NULL);
	str[--len] = '\0';
	while (len--)
	{
		str[len] = 48 + (n % 10);
		n = n / 10;
	}
	if (nega)
		str[0] = '-';
	return (str);
}
