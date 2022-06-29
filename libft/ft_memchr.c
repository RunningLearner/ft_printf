/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunam <seunam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 17:43:39 by seunam            #+#    #+#             */
/*   Updated: 2022/03/28 14:30:53 by seunam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			idx;
	unsigned char	*ss;

	ss = (unsigned char *)s;
	idx = 0;
	while (idx < n)
	{
		if (ss[idx] == (unsigned char)c)
			return (&ss[idx]);
		idx ++;
	}
	return (0);
}
