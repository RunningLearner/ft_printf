/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 15:20:17 by seunam            #+#    #+#             */
/*   Updated: 2022/04/14 16:59:41 by seunam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*ssrc;
	unsigned char	*ddst;

	ssrc = (unsigned char *)src;
	ddst = (unsigned char *)dst;
	if (dst == src || len == 0)
		return (dst);
	if (src > dst)
	{
		while (len)
		{
			*ddst++ = *ssrc++;
			len --;
		}
	}
	else
	{
		while (len)
		{
			ddst[len - 1] = ssrc[len - 1];
			len --;
		}
	}
	return (dst);
}
