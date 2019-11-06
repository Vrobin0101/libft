/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrobin <vrobin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 10:50:46 by vrobin            #+#    #+#             */
/*   Updated: 2019/11/06 10:58:17 by vrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isdigit(int c)
{
	if ((c >= '0' && c <= '9') || c == '+' || c == '-')
		return (1);
	return (0);
}
