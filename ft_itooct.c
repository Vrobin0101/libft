/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itooct.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrobin <vrobin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 10:51:04 by vrobin            #+#    #+#             */
/*   Updated: 2019/11/06 10:58:22 by vrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned long long	ft_itooct(unsigned long long nb)
{
	unsigned long long	octnbr;
	unsigned long long	i;

	octnbr = 0;
	i = 1;
	while (nb > 0)
	{
		octnbr += (nb % 8) * i;
		nb /= 8;
		i *= 10;
	}
	return (octnbr);
}
