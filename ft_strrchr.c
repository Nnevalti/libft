/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 17:54:57 by vdescham          #+#    #+#             */
/*   Updated: 2019/10/09 13:32:55 by vdescham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	*str;

	len = ft_strlen(s) + 1;
	str = (char *)s;
	while (len--)
		if (str[len] == c)
			return (&str[len]);
	return (0);
}
