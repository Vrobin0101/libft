/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_buff.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrobin <vrobin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 10:49:48 by vrobin            #+#    #+#             */
/*   Updated: 2019/11/06 10:58:04 by vrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	clear_buff(char **buff, int *j, t_detail **detail)
{
	if (*j >= BUFF_SIZE - 1)
	{
		(*DET)->len += *j;
		(*DET)->overbuff = 1;
		ft_putstr(*buff);
		free(*buff);
		if (!(*buff = ft_strnew(BUFF_SIZE)))
			return ;
		(*DET)->field -= *j;
		*j = 0;
	}
}
