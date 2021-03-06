/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_float.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrobin <vrobin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 10:49:42 by vrobin            #+#    #+#             */
/*   Updated: 2019/11/06 10:58:03 by vrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		bol_nine(char *tmp)
{
	int	i;

	i = 0;
	while (tmp[i])
	{
		if (tmp[i] != '9')
			return (0);
		else
			i++;
	}
	return (1);
}

char	*nega(long double *f, long double *rest, long long int *a,
		t_detail *detail)
{
	long long int			i;
	long long				u;
	char					*str;
	char					*tmp;

	if (!(str = ft_strnew(BUFF_SIZE)))
		return (NULL);
	if (*f < 0.0)
	{
		*f *= -1;
		str[0] = '-';
	}
	*a = *f;
	u = *f;
	*rest = *f - *a;
	tmp = ft_itoa(*a);
	str = ft_strcat(str, tmp);
	free(tmp);
	i = ft_strlen(str);
	if ((DET)->precision > 0)
		str[i] = '.';
	return (str);
}
