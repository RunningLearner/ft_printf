/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 18:32:10 by seunam            #+#    #+#             */
/*   Updated: 2022/06/29 20:46:24 by seunam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "./libft/libft.h"
# include <stdarg.h>

int	ft_printf(const char *arg, ...);
int	hexlen(size_t arg);
int	nbrlen(long long arg);
void	put_hex(size_t num);
void	put_hexup(size_t num);
void	put_uint(unsigned int num);
int	printchar(int arg);
int	printstr(char *arg);
int	printptr(size_t arg);
int	printint(int arg);
int	printuint(unsigned int arg, char type);

#endif
