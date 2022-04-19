/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 16:22:37 by seunam            #+#    #+#             */
/*   Updated: 2022/04/19 17:31:26 by seunam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_print.h"

static int	printchar(int arg)
{
	char	c;
	int	cnt;

	cnt = 0;
	c = arg;
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

static int	printptr(unsigned long long arg)
{
	int	cnt;

	cnt = 0;
	cnt += write(1, "0x", 2);
	while (arg)
	{
		print
		cnt += write(1, "0123456789abcdef"[arg % 16],1);
	}
	return (cnt);
}

static int	printint(int arg)
{
	int	cnt;
	char	*str;

	cnt = 0;
	str = itoa(arg);
	cnt = strlen(str);
	while (*str)
	{
		write(1, str, 1);
		str ++;
	}
	return (cnt);
}

static int	printuint(unsigned int arg, char type)
{	
	int	cnt;
	char	str[10];

	cnt = 0;
	if (arg == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	while (arg)
	{
		str[cnt] = (arg % 10) + '0';
		arg /= 10;
		cnt ++;
	}
	while (str >= 0)
	{
		write(1, str--, 1);
	}
	return (cnt);
}
