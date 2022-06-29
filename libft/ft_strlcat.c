/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 16:51:43 by seunam            #+#    #+#             */
/*   Updated: 2022/04/14 17:41:50 by seunam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	idx;
	size_t	srclen;
	size_t	dstlen;

	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	if (dstsize <= dstlen)
		return (srclen + dstsize);
	idx = 0;
	while (src[idx] && idx + dstlen + 1 < dstsize)
	{
		dst[dstlen + idx] = src[idx];
		idx ++;
	}
	dst[dstlen + idx] = 0;
	return (srclen + dstlen);
}
