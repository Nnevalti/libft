/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 17:44:52 by vdescham          #+#    #+#             */
/*   Updated: 2019/10/11 17:57:51 by vdescham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *))
{
	t_list	*newlst;

	while (lst)
	{
		ft_lstadd_back(&newlst, ft_lstnew((*f)(lst->content)));
		lst = lst->next;
	}
	return (newlst);
}
