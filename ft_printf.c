/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 18:32:21 by seunam            #+#    #+#             */
/*   Updated: 2022/04/18 16:45:33 by seunam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	parising(const char *type, va_list ap)
{
	int	printcnt;
	
	printcnt = 0;
	while (*type)
	{
		if (*type == '%')
		{	
			type ++;
			if (*type == 'c' || *type == '%')
				printcnt += printchar(va_arg(ap, int)); 
			if (*type == 's')
				printcnt += printstr(va_arg(ap, char *)); 
			if (*type == 'p')
				printcnt += printptr(va_arg(ap, long long)); 
			if (*type == 'i' || *type == 'd')
				printcnt += printint(va_arg(ap, int)); 
			if (*type == 'u' || *type == 'x' || *type == 'X')
				printcnt += printuint(va_arg(ap, unsigned int)); 
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
	printcnt = parsing(type, ap);
	va_end(ap);
	return (prnitcnt);
}
