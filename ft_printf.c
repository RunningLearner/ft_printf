/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 18:32:21 by seunam            #+#    #+#             */
/*   Updated: 2022/06/29 21:01:02 by seunam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	parsing(char type, va_list *ap)
{
	int	printcnt;
	
	printcnt = 0;
	if (type == 'c')
		printcnt = printchar(va_arg(*ap, int)); 
	else if (type == 's')
		printcnt = printstr(va_arg(*ap, char *)); 
	else if (type == 'p')
		printcnt = printptr(va_arg(*ap, size_t)); 
	else if (type == 'i' || type == 'd')
		printcnt = printint(va_arg(*ap, int)); 
	else if (type == 'u' || type == 'x' || type == 'X')
		printcnt = printuint(va_arg(*ap, unsigned int), type); 
	else if (type == '%')
		printcnt = write(1, "%", 1);
	return (printcnt);
}

int	ft_printf(const char *type, ...)
{
	va_list	ap;
	int	printcnt;

	printcnt = 0;
	va_start(ap, type);
	while (*type)
	{
		if (*type == '%')
		{
			printcnt += parsing(*(type + 1), &ap);
			type ++;
		}
		else
			printcnt += write (1, type, 1);
		type ++;
	}
	va_end(ap);
	return (printcnt);
}
