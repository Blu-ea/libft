/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 03:32:50 by amiguez           #+#    #+#             */
/*   Updated: 2022/06/25 14:12:58 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief return (1) if c is a letter, (0) otherwise
 * 
 * @param c char to test
 * @return 1 or 0
 */
int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

/**
 * @brief retrun (1) if all the char in str are letter, (0) otherwise
 * 
 * @param arg string to test
 * @return 1 or 0
 */
int	ft_isall_alpha(char *arg)
{
	int	i;

	i = 0;
	while (arg[i])
	{
		if (!ft_isalpha(arg[i]))
			return (0);
		i++;
	}
	return (1);
}
