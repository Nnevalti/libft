/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescham <vdescham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 15:27:16 by vdescham          #+#    #+#             */
/*   Updated: 2019/10/21 15:27:18 by vdescham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int		ft_countset(char const *s, char c)
{
	int		i;
	int		count;
	int		flag;

	i = 0;
	flag = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] != c && s[i])
		{
			flag = 1;
			i++;
		}
		if (flag == 1)
			count++;
		else
			i++;
		flag = 0;
	}
	return (count);
}

static char		*ft_mallocstr(char const *s, char c)
{
	int		i;
	char	*str;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	if (!(str = malloc(sizeof(char) * (i + 1))))
		return (0);
	i = 0;
	while (s[i] && s[i] != c)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char			**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**tab;

	i = 0;
	j = 0;
	if (!(tab = malloc(sizeof(char *) * (ft_countset(s, c) + 1))))
		return (0);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] != c && s[i])
		{
			tab[j] = ft_mallocstr(&s[i], c);
			while (s[i] != c && s[i])
				i++;
			j++;
		}
	}
	tab[j] = 0;
	return (tab);
}
