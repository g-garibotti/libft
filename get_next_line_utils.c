/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggaribot <ggaribot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 15:50:27 by tviejo            #+#    #+#             */
/*   Updated: 2024/09/10 14:40:13 by ggaribot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen_gnl(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strncpy_gnl(char *dest, char *scr, int n)
{
	int	i;

	i = 0;
	if (scr != NULL && dest != NULL)
	{
		while (i < n && scr[i] != '\0')
		{
			dest[i] = scr[i];
			i++;
		}
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

void	ft_remove_returned_gnl(char *buffer)
{
	int	i;
	int	n;

	n = get_first_line_gnl(buffer);
	i = n;
	while (buffer[i] != '\0')
	{
		buffer[i - n] = buffer[i];
		i++;
	}
	i = i - n;
	while (i <= BUFFER_SIZE)
	{
		buffer[i] = '\0';
		i++;
	}
}

int	get_first_line_gnl(char *buffer)
{
	int	i;

	i = 0;
	while (buffer[i] != '\0' && buffer[i] != '\n')
	{
		i++;
	}
	return (i + 1);
}

int	ft_is_new_line_gnl(char *buffer)
{
	int	i;

	i = 0;
	while (buffer[i] != '\0')
	{
		if (buffer[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}
