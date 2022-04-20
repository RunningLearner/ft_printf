/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_util.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 12:05:34 by seunam            #+#    #+#             */
/*   Updated: 2022/04/20 15:23:29 by seunam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_print.h"

int	hexlen(size_t arg)
{
	int	len;

	len = 0;
	if (arg == 0)
		return (1);
	while (arg)
	{	
		len ++;
		arg /= 16;
	}
	return (len);
}

int	nbrlen(long long arg)
{
	long long	len;

	len = 0;
	if (arg = 0)
		return (1);
	if (arg < 0)
		len ++;
	while (arg)
	{
		len ++;
		arg /= 10;
	}
	return (len);
}

void	put_hex(size_t num)
{
	if (num >= 16)
	{
		put_hex(num / 16);
		put_hex(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd((num + '0'), 1);
		else
			ft_putchar_fd((num - 10 + 'a'), 1);
	}
}

void	put_hexup(size_t num)
{
	if (num >= 16)
	{
		put_pointer(num / 16);
		put_pointer(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd((num + '0'), 1);
		else
			ft_putchar_fd((num - 10 + 'A'), 1);
	}
}

void	put_uint(int n)
{
	if (n >= 10)
	{
		put_uint(n / 10);
		write(1, &"0123456789"[n % 10], 1);
	}
	else
		write(1, &"0123456789"[n], 1);
}
