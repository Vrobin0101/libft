/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrobin <vrobin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 10:51:30 by vrobin            #+#    #+#             */
/*   Updated: 2019/11/06 10:58:30 by vrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*temp;

	if (!(temp = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (content == NULL)
	{
		temp->content = NULL;
		temp->content_size = 0;
	}
	else
	{
		if (!(temp->content = malloc(content_size)))
		{
			free(temp);
			return (NULL);
		}
		ft_memcpy(temp->content, content, content_size);
		temp->content_size = content_size;
	}
	temp->next = NULL;
	return (temp);
}
