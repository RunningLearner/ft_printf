/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 14:40:37 by seunam            #+#    #+#             */
/*   Updated: 2022/03/28 14:31:40 by seunam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			idx;
	unsigned char	*bb;

	bb = (unsigned char *)b;
	idx = 0;
	while (idx < len)
	{
		bb[idx] = (unsigned char)c;
		idx ++;
	}
	return (b);
}
