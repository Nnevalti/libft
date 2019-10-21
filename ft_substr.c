/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 16:35:28 by vdescham          #+#    #+#             */
/*   Updated: 2019/10/21 17:36:20 by vdescham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*mem;
	int				size;
	unsigned int	i;

	i = 0;
	if (!s || !*s || start >= ft_strlen(s) || !len)
		return ("\0");
	size = (start + len > ft_strlen(s)) ? ft_strlen(s) - start : len;
	if (!(mem = malloc((size + 1) * sizeof(char))))
		return (NULL);
	while (size-- && s[start + i])
	{
		mem[i] = s[start + i];
		i++;
	}
	mem[i] = '\0';
	return (mem);
}
