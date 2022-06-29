/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 15:12:00 by seunam            #+#    #+#             */
/*   Updated: 2022/04/14 17:33:57 by seunam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			idx;
	unsigned char	*ddst;
	unsigned char	*ssrc;

	if (!dst && !src)
		return (NULL);
	ddst = (unsigned char *)dst;
	ssrc = (unsigned char *)src;
	idx = 0;
	while (idx < n)
	{
		ddst[idx] = ssrc[idx];
		idx ++;
	}
	return (dst);
}
