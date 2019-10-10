/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 11:01:49 by vdescham          #+#    #+#             */
/*   Updated: 2019/10/10 17:51:06 by vdescham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		is_charset(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

static int		start_index(char const *s1, char const *set)
{
	int		start;

	start = 0;
	while (is_charset(s1[start], set))
		start++;
	return (start);
}

static int		end_index(char const *s1, char const *set)
{
	int		end;
	size_t	s1_len;

	end = 0;
	s1_len = ft_strlen(s1);
	while (is_charset(s1[s1_len - end - 1], set))
		end++;
	return (s1_len - end);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	char	*mem;
	int		start;
	int		end;

	start = start_index(s1, set);
	end = end_index(s1, set);
	if (end < start)
		return ("\0");
	if (!(mem = malloc((end - start + 1) * sizeof(char))))
		return (0);
	mem = ft_strncpy(mem, s1 + start, end - start);
	mem[end - start] = '\0';
	return (mem);
}
