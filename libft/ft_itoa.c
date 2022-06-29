/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunam <seunam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 14:07:10 by seunam            #+#    #+#             */
/*   Updated: 2022/04/07 15:13:56 by seunam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	digits(int n)
{
	size_t	cnt;

	cnt = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		cnt ++;
	while (n)
	{
		n /= 10;
		cnt ++;
	}
	return (cnt);
}

static char	*ft_putnbr_(char *str, int n, size_t len)
{
	if (n == 0)
	{
		str[0] = '0';
		str[1] = 0;
		return (str);
	}
	if (n < 0)
	{
		str[0] = '-';
		str[--len] = (n % 10 * -1) + '0';
		n /= 10;
		n *= -1;
	}
	while (n)
	{
		str[--len] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;

	len = digits(n);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str = ft_putnbr_(str, n, len);
	str[len] = 0;
	return (str);
}
