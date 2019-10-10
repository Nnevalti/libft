/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:19:56 by vdescham          #+#    #+#             */
/*   Updated: 2019/10/09 15:07:54 by vdescham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char *d;

	d = dst;
	while (len && *src)
	{
		*d++ = *src++;
		len--;
	}
	while (len-- && *d)
	{
		*d++ = '\0';
	}
	return (dst);
}
