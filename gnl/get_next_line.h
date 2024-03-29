/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: navid <navid@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 16:30:39 by nnabaeei          #+#    #+#             */
/*   Updated: 2024/02/05 06:59:10 by navid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <fcntl.h>
# include <string.h>
# include <stdlib.h>
# include <stdio.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

typedef struct t_file_att
{
	int	fd;
	int	line_inx;
}t_file_att;

int			length(char *str);
char		*string_joint(char *str1, char *str2);
int			find_line_inx(char *str);
char		*psudo_strdup(char	*str, int start, int end);
t_file_att	*store_fd_attr(int fd);
char		*fill_spare_up(t_file_att *new_fd, char *spare);
char		*return_line(t_file_att *new_fd, char	*spare);
char		*keep_remain(t_file_att *new_fd, char *spare);
char		*get_next_line(int fd);

#endif