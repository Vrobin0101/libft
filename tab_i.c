/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_i.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrobin <vrobin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 10:57:36 by vrobin            #+#    #+#             */
/*   Updated: 2019/11/06 10:57:43 by vrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		tab_i(va_list args, t_detail *detail, char *buff)
{
	int i;
	int len;
	int ret;
	int *tab;

	free(buff);
	(void)(DET);
	i = 0;
	len = 0;
	ret = 0;
	tab = va_arg(args, int*);
	len = va_arg(args, int);
	while (i < len)
	{
		ret += ft_printf("%d\n", tab[i]);
		i++;
	}
	return (ret);
}
