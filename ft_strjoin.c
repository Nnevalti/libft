/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 16:52:16 by vdescham          #+#    #+#             */
/*   Updated: 2019/10/10 13:31:55 by vdescham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*mem;

	if (!(mem = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (NULL);
	mem = ft_strcpy(mem, s1);
	mem = ft_strcat(mem, s2);
	return (mem);
}
