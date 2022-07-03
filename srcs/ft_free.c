/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 09:20:44 by amiguez           #+#    #+#             */
/*   Updated: 2022/07/03 09:23:42 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Free an 2d array with a \0 at the end.
 * 
 * @param array 
 */
void	ft_free_2d_array(char **array)
{
	int	i;

	i = 0;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
}

/**
 * @brief free an n bytes of an 2d array
 * 
 * @param array 
 */

void	ft_free_2d_array_n(char **array, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		free(array[i]);
		i++;
	}
	free(array);
}
