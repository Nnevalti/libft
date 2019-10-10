/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 17:55:42 by vdescham          #+#    #+#             */
/*   Updated: 2019/10/08 18:30:11 by vdescham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (!needle[0])
		return ((char *)haystack);
	while (haystack[i] && len--)
	{
		while (haystack[i + j] == needle[j] && haystack[i + j] && len--)
		{
			j++;
			if (!needle[j])
				return ((char *)&haystack[i]);
		}
		j = 0;
		i++;
	}
	return (0);
}
