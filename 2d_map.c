/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2d_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggaribot <ggaribot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 14:11:22 by ggaribot          #+#    #+#             */
/*   Updated: 2024/09/09 14:12:04 by ggaribot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strdup_2d(char **array)
{
	char	**new_array;
	int		i;
	int		len;

	if (!array)
		return (NULL);
	len = 0;
	while (array[len])
		len++;
	new_array = (char **)malloc(sizeof(char *) * (len + 1));
	if (!new_array)
		return (NULL);
	i = 0;
	while (i < len)
	{
		new_array[i] = ft_strdup(array[i]);
		if (!new_array[i])
		{
			ft_free_2d_array(new_array);
			return (NULL);
		}
		i++;
	}
	new_array[i] = NULL;
	return (new_array);
}

void	ft_free_2d_array(char **array)
{
	int	i;

	if (!array)
		return ;
	i = 0;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
}

size_t	ft_strlen_2d(char **array)
{
	size_t	len;

	len = 0;
	if (!array)
		return (0);
	while (array[len])
		len++;
	return (len);
}
