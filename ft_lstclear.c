/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 17:04:06 by vdescham          #+#    #+#             */
/*   Updated: 2019/10/21 15:18:50 by vdescham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*ptr;

	ptr = *lst;
	while (*lst)
	{
		ptr = (*lst)->next;
		if ((*lst)->content)
			(*del)((*lst)->content);
		free(*lst);
		*lst = ptr;
	}
	*lst = NULL;
}
