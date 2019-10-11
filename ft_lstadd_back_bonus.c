/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 12:34:00 by vdescham          #+#    #+#             */
/*   Updated: 2019/10/11 16:25:47 by vdescham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*lastelement;

	if (!alst || !*alst)
	{
		*alst = new;
		return ;
	}
	lastelement = ft_lstlast(*alst);
	lastelement->next = new;
}
