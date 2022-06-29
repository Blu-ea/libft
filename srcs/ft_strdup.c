/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 02:34:42 by amiguez           #+#    #+#             */
/*   Updated: 2022/06/29 23:59:02 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Duplicate a string.
 * 
 * @param str the string to duplicate.
 * @return char* of the malocated duplicated string.
 */
char	*ft_strdup(const char *src)
{
	int		i;
	char	*ret;

	i = 0;
	while (src[i])
		i++;
	ret = malloc(sizeof(char) * i + 1);
	if (!ret)
		return (NULL);
	ret[i] = '\0';
	while (i--)
		ret[i] = src[i];
	ret[0] = src[0];
	return (ret);
}

/**
 * @brief Duplicate a size bytes of a string.
 * 
 * @param str the string to duplicate.
 * @param size The number of bytes to duplicate.
 * @return char* of the malocated duplicated string Or NULL if Malloc failed.
 */
char	*ft_strndup(char *src, int size)
{
	int		i;
	char	*ret;

	i = 0;
	while (src[i] && i < size)
		i++;
	ret = malloc(sizeof(char) * i + 1);
	if (!ret)
		return (NULL);
	ret[i] = '\0';
	while (i--)
		ret[i] = src[i];
	ret[0] = src[0];
	return (ret);
}
