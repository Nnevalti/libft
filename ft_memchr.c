/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 12:29:00 by vdescham          #+#    #+#             */
/*   Updated: 2019/10/21 13:52:28 by vdescham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char *str;

	str = (char *)s;
	while ((n-- || c == '\0') && *str)
	{
		if (*str == c)
			return (str);
		str++;
	}
	return (0);
}
