/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdescham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 15:35:51 by vdescham          #+#    #+#             */
/*   Updated: 2019/10/10 17:47:12 by vdescham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countn(int n)
{
	int i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	int				count;
	char			*numb;
	unsigned int	nb;

	count = countn(n);
	numb = malloc(count + 1 * sizeof(char));
	numb[count] = '\0';
	count--;
	if (n == 0)
		return ("0");
	if (n < 0)
	{
		nb = -n;
		numb[0] = '-';
	}
	else
		nb = n;
	while (nb)
	{
		numb[count] = nb % 10 + '0';
		nb /= 10;
		count--;
	}
	return (numb);
}
