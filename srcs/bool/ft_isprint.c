/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:05:01 by amiguez           #+#    #+#             */
/*   Updated: 2022/06/25 14:12:58 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief return (1) if c is a printable character, (0) otherwise
 * 
 * @param c the char to test
 * @return 1 or 0
 */
int	ft_isprint(int c)
{
	if (c <= 126 && c >= 32)
		return (1);
	return (0);
}

/**
 * @brief return (1) if all the char in str are printable, (0) otherwise
 * 
 * @param str the string to test
 * @return 1 or 0
 */
int	ft_isall_print(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!ft_isprint(str[i]))
			return (0);
		i++;
	}
	return (1);
}
