/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:01:00 by amiguez           #+#    #+#             */
/*   Updated: 2022/10/05 10:47:56 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Compare two strings.
 * 
 * @param s1 The first string to compare.
 * @param s2 The second string to compare.
 * @param n The number of bytes to compare.
 * @return an integer greater than, equal to, or less than 0, according to the
 * relationship between the strings. (str1[i] - str2[i])
 */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned long int	i;
	unsigned char		*str1;
	unsigned char		*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (!str1 && !str2)
		return (0);
	if (!str1)
		return (-*str2);
	if (!str2)
		return (*str1);
	i = 0;
	while (n > i && str1[i] != 0 && str2[i] != 0)
	{
		if (s1[i] != s2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	if (i == n)
		return (0);
	return (str1[i] - str2[i]);
}

/**
 * @brief Compare two strings. until one is finished.
 *
 * @param s1 The first string to compare.
 * @param s2 The second string to compare.
 * @return an integer greater than, equal to, or less than 0, according to the
 * relationship between the strings. (str1[i] - str2[i])
 */
int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned long int	i;

	if (!s1 && !s2)
		return (0);
	if (!s1)
		return (-*s2);
	if (!s2)
		return (*s1);
	i = 0;
	while (s1[i] != 0 && s2[i] != 0)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}


/**
 * @brief Compare two strings. until one is finished. This function is case insensitive.
 *
 * @param s1 The first string to compare.
 * @param s2 The second string to compare.
 * @return an integer greater than, equal to, or less than 0, according to the
 * relationship between the strings. (str1[i] - str2[i])
 */
int	ft_stricmp(const char *s1, const char *s2)
{
	unsigned long int	i;

	if (!s1 && !s2)
		return (0);
	if (!s1)
		return (-*s2);
	if (!s2)
		return (*s1);
	i = 0;
	while (s1[i] != 0 && s2[i] != 0)
	{
		if (ft_tolower(s1[i]) != ft_tolower(s2[i]))
			return (ft_tolower(s1[i]) - ft_tolower(s2[i]));
		i++;
	}
	return (ft_tolower(s1[i]) - ft_tolower(s2[i]));
}

int	ft_stracmp(const char *s1, const char *s2)
{
	unsigned long int	i;
	unsigned long int	j;

	if (!s1 && !s2)
		return (0);
	if (!s1)
		return (-*s2);
	if (!s2)
		return (*s1);
	i = 0;
	j = 0;
	while (s1[i] != 0 && s2[j] != 0)
	{
		if (ft_isalpha(s1[i]) && ft_isdigit(s2[j]))
		{
			if (ft_tolower(s1[i]) != ft_tolower(s2[j]))
				return (ft_tolower(s1[i]) - ft_tolower(s2[j]));
			i++;
			j++;
		}
		else if (!ft_isalpha(s1[i]))
			i++;
		else if (!ft_isalpha(s2[j]))
			j++;
	}
	return (ft_tolower(s1[i]) - ft_tolower(s2[j]));
}
