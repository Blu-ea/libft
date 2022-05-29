/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 04:29:05 by amiguez           #+#    #+#             */
/*   Updated: 2022/05/29 07:03:59 by amiguez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*point;
	t_list	*point2;

	if (!lst || !del)
		return ;
	point = *lst;
	point2 = *lst;
	while (point)
	{
		point2 = point2 -> next;
		del (point -> content);
		free (point);
		point = point2;
	}
	*lst = NULL;
}
