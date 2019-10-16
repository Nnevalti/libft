/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 16:35:28 by vdescham          #+#    #+#             */
/*   Updated: 2019/10/16 17:56:03 by vdescham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*mem;
	unsigned int	i;

	if (!(mem = malloc((len + 1) * sizeof(char))))
		return ("NULL");
	i = 0;
	if (start > ft_strlen(s))
		return ("\0");
	while (len-- && s[start + i])
	{
		mem[i] = s[start + i];
		i++;
	}
	mem[i] = '\0';
	return (mem);
}
