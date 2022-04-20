/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 16:22:37 by seunam            #+#    #+#             */
/*   Updated: 2022/04/20 15:23:24 by seunam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_print.h"

static int	printchar(int arg)
{
	char	c;
	int	cnt;

	cnt = 0;
	c = (char)arg;
	cnt = write(1, &c, 1);
	return (cnt);
}

static int	printstr(char *arg)
{
	int	cnt;

	cnt = 0;
	while (arg)
	{
		cnt += write(1, arg, 1);
		arg ++;
	}
	return (cnt);
}

static int	printptr(size_t arg)
{
	int	cnt;

	cnt = 0;
	cnt += write(1, "0x", 2);
	put_hex(arg);
	cnt += hexlen(arg);
	return (cnt);
}

static int	printint(int arg)
{
	int	cnt;
	char	*str;

	cnt = 0;
	else
	{
		ft_putnbr_fd(arg, 1);
		cnt += nbrlen(arg);
	}
	return (cnt);
}

static int	printuint(unsigned int arg, char type)
{	
	int	cnt;
	char	str[10];

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
