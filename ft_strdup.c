/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 16:05:20 by vdescham          #+#    #+#             */
/*   Updated: 2019/10/10 13:31:34 by vdescham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *s1)
{
	size_t	len;
	char	*s2;

	len = ft_strlen(s1) + 1;
	s2 = malloc(len * sizeof(char));
	s2 = ft_strcpy(s2, s1);
	return (s2);
}
