/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 18:32:21 by seunam            #+#    #+#             */
/*   Updated: 2022/04/17 18:58:47 by seunam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	parising(const char *type, va_list ap,)
{
	int	printcnt;
	
	while (*type)
	{
		if (*type == '%')
		{
			if (*(type + 1) == )
		}
		else
			printcnt += write(1, type, 1);
		type ++;
	}
	return (printcnt);
}

int	ft_printf(const char *type, ...)
{
	va_list	ap;
	int	printcnt;

	va_start(ap, type);
	printcnt = 
	va_end(ap);
	return (prnitcnt);
}
