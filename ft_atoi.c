/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrobin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 15:30:51 by vrobin            #+#    #+#             */
/*   Updated: 2018/11/20 14:27:25 by vrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int i;
	int nb;
	int nega;

	i = 0;
	nb = 0;
	nega = 1;
	while ((str[i] > 8 && str[i] < 14) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			nega = -1;
		i++;
	}
	while (str[i] > 47 && str[i] < 58 && str[i])
	{
		if (!(str[i] > 47 && str[i] < 58 && str[i]))
			return (nb * nega);
		nb = nb * 10 + str[i] - 48;
		i++;
	}
	return (nb * nega);
}
