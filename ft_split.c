/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 15:11:18 by vdescham          #+#    #+#             */
/*   Updated: 2019/10/10 15:34:19 by vdescham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ischarset(char charset, char c)
{
	if (c == charset)
		return (1);
	return (0);
}

static int	ft_count_words(char const *str, char charset)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (ischarset(charset, str[i]) && str[i])
			i++;
		if (!ischarset(charset, str[i]) && str[i])
			count++;
		while (!ischarset(charset, str[i]) && str[i])
			i++;
	}
	return (count);
}

static void	words_length(char **result, char const *str, char charset)
{
	int i;
	int j;
	int word_len;

	i = 0;
	j = 0;
	while (str[i])
	{
		word_len = 0;
		while (ischarset(charset, str[i]))
			i++;
		while (!ischarset(charset, str[i]) && str[i])
		{
			word_len++;
			i++;
		}
		result[j] = (char*)malloc(sizeof(char) * word_len + 1);
		if (!result[j] || !str[i])
			return ;
		j++;
	}
}

static void	fillresult(char **result, char const *str,
				char charset, int nb_words)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	while (str[i] && j < nb_words)
	{
		k = 0;
		while (ischarset(charset, str[i]))
			i++;
		while (!ischarset(charset, str[i]) && str[i])
		{
			result[j][k] = str[i];
			k++;
			i++;
		}
		result[j][k] = '\0';
		j++;
	}
	result[j] = 0;
}

char		**ft_split(char const *str, char c)
{
	int		count_words;
	char	**result;

	count_words = ft_count_words(str, c);
	result = (char**)malloc(sizeof(char*) * count_words + 1);
	words_length(result, str, c);
	fillresult(result, str, c, count_words);
	return (result);
}
