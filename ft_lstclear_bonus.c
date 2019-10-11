/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 17:04:06 by vdescham          #+#    #+#             */
/*   Updated: 2019/10/11 18:08:03 by vdescham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	**ptr;

	*ptr = *lst;
	if (*lst)
	{
		(*del)((*lst)->content);
		free(*lst);
		while ((*lst)->next)
		{
			*lst = (*lst)->next;
		}
	}
	*lst = NULL;
}
