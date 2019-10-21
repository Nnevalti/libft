/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 17:44:52 by vdescham          #+#    #+#             */
/*   Updated: 2019/10/21 15:18:09 by vdescham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*ptr;

	newlst = NULL;
	ptr = lst;
	while (lst)
	{
		ft_lstadd_back(&newlst, ft_lstnew(f(lst->content)));
		lst = lst->next;
	}
	ft_lstclear(&ptr, (*del));
	return (newlst);
}
