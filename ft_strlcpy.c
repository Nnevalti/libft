/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 13:20:46 by vdescham          #+#    #+#             */
/*   Updated: 2019/10/10 13:45:49 by vdescham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *src, size_t dstsize)
{
	size_t i;

	i = 0;
	while (src[i])
	{
		if (i < dstsize - 1 && dstsize > 0)
		{
			*dst = src[i];
			dst++;
		}
		i++;
	}
	if (dstsize > 0)
		*dst = '\0';
	return (i);
}
