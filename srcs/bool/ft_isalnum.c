/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:55:08 by amiguez           #+#    #+#             */
/*   Updated: 2022/06/25 14:10:41 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief return (1) if c is a letter or a digit, (0) otherwise
 * 
 * @param c the char to test
 * @return  1 or 0
 */
int	ft_isalphanum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

/**
 * @brief return (1) if all the char in str are letter or digit, (0) otherwise
 * 
 * @param arg the sring to test
 * @return  1 or 0
 */
int	ft_isall_alphanum(char *arg)
{
	int	i;

	i = 0;
	while (arg[i])
	{
		if (!ft_isalnum(arg[i]))
			return (0);
		i++;
	}
	return (1);
}
