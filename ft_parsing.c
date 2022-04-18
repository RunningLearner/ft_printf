/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 16:22:37 by seunam            #+#    #+#             */
/*   Updated: 2022/04/18 16:58:39 by seunam           ###   ########.fr       */
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

static int	printptr(long long arg)
{
	int	cnt;

	cnt = 0;
	return (cnt);
}

static int	printint(int arg)
{
	int	cnt;

	cnt = 0;
	return (cnt);
}

static int	printuint(unsigned int arg)
{	
	int	cnt;

	cnt = 0;
	return (cnt);
}
