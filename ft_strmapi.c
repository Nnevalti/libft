/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 16:08:16 by vdescham          #+#    #+#             */
/*   Updated: 2019/10/10 16:20:47 by vdescham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*dst;
	int		i;

	if (!(dst = malloc(ft_strlen(s) * sizeof(char))))
		return (NULL);
	i = 0;
	while (s[i])
	{
		dst[i] = (*f)(i, s[i]);
		i++;
	}
	return (dst);
}
