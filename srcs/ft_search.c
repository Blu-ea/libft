/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 09:48:07 by amiguez           #+#    #+#             */
/*   Updated: 2022/10/23 10:14:00 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Search for a character in a string
 * 
 * @param s String to search in
 * @param c Character to search for
 * @return a malloced string containing the first occurence of c in s
 */

char	*ft_search(char *s, char c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (ft_strndup(s, i));
		i++;
	}
	return (NULL);
}
