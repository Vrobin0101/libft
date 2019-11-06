/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   percent_conv.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrobin <vrobin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 10:57:20 by vrobin            #+#    #+#             */
/*   Updated: 2019/11/06 10:57:24 by vrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		percent_conv(va_list args, t_detail *detail, char *buff)
{
	size_t		u;
	char		*string;

	string = "%";
	(void)(args);
	(DET)->space = 0;
	if ((DET)->precision == -1)
		(DET)->precision = 0;
	(DET)->strlen = ft_strlen(string);
	buff = edit_ret(buff, string, detail);
	u = ft_strlen(buff);
	free(buff);
	return (u);
}
