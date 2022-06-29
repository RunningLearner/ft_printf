/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 16:22:37 by seunam            #+#    #+#             */
/*   Updated: 2022/06/29 20:46:01 by seunam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printchar(int arg)
{
	write(1, &arg, 1);
	return (1);
}

int	printstr(char *arg)
{
	int	cnt;

	cnt = 0;
	if (!arg)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (*arg)
	{
		cnt += write(1, arg, 1);
		arg ++;
	}
	return (cnt);
}

int	printptr(size_t arg)
{
	int	cnt;

	cnt = 0;
	cnt += write(1, "0x", 2);
	put_hex(arg);
	cnt += hexlen(arg);
	return (cnt);
}

int	printint(int arg)
{
	int	cnt;

	cnt = 0;
	ft_putnbr_fd(arg, 1);
	cnt += nbrlen(arg);
	return (cnt);
}

int	printuint(unsigned int arg, char type)
{	
	int	cnt;

	cnt = 0;
	if (type == 'u')
	{
		put_uint(arg);
		cnt += nbrlen(arg);
	}
	else if (type == 'x')
	{
		put_hex(arg);
		cnt += hexlen(arg);
	}
	else if (type == 'X')
	{
		put_hexup(arg);
		cnt += hexlen(arg);
	}
	return (cnt);
}
