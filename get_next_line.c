/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggaribot <ggaribot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 15:50:49 by tviejo            #+#    #+#             */
/*   Updated: 2024/09/10 14:52:10 by ggaribot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_realloc_gnl(char *ptr, char *buffer, int n)
{
	void	*temp;

	temp = malloc((ft_strlen_gnl(ptr) + 1) * sizeof(char));
	if (temp == NULL)
		return (temp);
	ft_strncpy_gnl(temp, ptr, ft_strlen_gnl(ptr) + 1);
	free(ptr);
	ptr = malloc((n + 1) * sizeof(char));
	if (ptr == NULL)
		return (ptr);
	ft_strncpy_gnl(ptr, temp, ft_strlen_gnl(temp) + 1);
	ft_strncpy_gnl(ptr + ft_strlen_gnl(temp), buffer, ft_strlen_gnl(buffer)
		+ 1);
	free(temp);
	ptr[n] = '\0';
	return (ptr);
}

char	*ft_remove_buffer_gnl(char *output)
{
	int	i;

	i = 0;
	while (output[i] != '\0' && output[i] != '\n')
		i++;
	if (output[i] == '\n')
	{
		i++;
		while (output[i] != '\0')
		{
			output[i] = '\0';
			i++;
		}
	}
	return (output);
}

void	*ft_bzero_gnl(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = '\0';
		i++;
	}
	return (s);
}

char	*ft_read_gnl(char *buffer, int fd)
{
	int		byte;
	int		byte_read;
	char	*output;

	byte_read = ft_strlen_gnl(buffer);
	byte = 1;
	output = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (output == NULL)
		return (output);
	ft_strncpy_gnl(output, buffer, BUFFER_SIZE + 1);
	while (ft_is_new_line_gnl(buffer) == 0 && byte > 0 && output != NULL)
	{
		ft_bzero_gnl(buffer, BUFFER_SIZE + 1);
		byte = read(fd, buffer, BUFFER_SIZE);
		if (byte == -1)
			return (ft_bzero_gnl(buffer, BUFFER_SIZE + 1), free(output), NULL);
		if (byte > 0)
		{
			buffer[byte] = '\0';
			byte_read += byte;
			output = ft_realloc_gnl(output, buffer, byte_read + 1);
		}
	}
	return (output);
}

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE + 1] = "\0";
	char		*output;

	if (fd < 0 || fd > 1023)
		return (NULL);
	output = ft_read_gnl(buffer, fd);
	if (output == NULL)
		return (ft_bzero_gnl(buffer, BUFFER_SIZE + 1), NULL);
	ft_remove_returned_gnl(buffer);
	output = ft_remove_buffer_gnl(output);
	if (output[0] == '\0')
		return (ft_bzero_gnl(buffer, BUFFER_SIZE + 1), free(output), NULL);
	return (output);
}
