/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrobin <vrobin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 10:56:58 by vrobin            #+#    #+#             */
/*   Updated: 2019/11/06 10:57:02 by vrobin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include "libft.h"
# include <sys/types.h>
# include <sys/uio.h>

typedef	struct		s_file
{
	int				fd;
	char			*reste;
	struct s_file	*next;
}					t_file;

typedef struct		s_tile
{
	int				connections;
	char			**tile;
	struct s_tile	*next;
}					t_tile;

int					check_next(char *str);
int					get_next_line(const int fd, char **line);

#endif
