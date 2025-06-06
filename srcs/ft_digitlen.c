/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digitlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 17:30:12 by amiguez           #+#    #+#             */
/*   Updated: 2025/06/03 17:34:45 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_digitlen(long n){
	size_t len = 1;
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	while (n >= 10) {
		n /= 10;
		len++;
	}
	return len;
}