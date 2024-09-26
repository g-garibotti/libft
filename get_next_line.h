/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggaribot <ggaribot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 15:50:56 by tviejo            #+#    #+#             */
/*   Updated: 2024/09/26 11:38:32 by ggaribot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <errno.h>
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# elif BUFFER_SIZE < 0
#  undef BUFFER_SIZE
#  define BUFFER_SIZE 0
# endif

char	*get_next_line(int fd);
int		ft_strlen_gnl(char *str);
char	*ft_strncpy_gnl(char *dest, char *scr, int n);
void	ft_remove_returned_gnl(char *buffer);
int		get_first_line_gnl(char *buffer);
void	*ft_bzero_gnl(void *s, size_t n);
int		ft_is_new_line_gnl(char *buffer);
char	*ft_remove_buffer_gnl(char *output);
char	*ft_read_gnl(char *buffer, int fd);
char	*ft_realloc_gnl(char *ptr, char *buffer, int n);

#endif
