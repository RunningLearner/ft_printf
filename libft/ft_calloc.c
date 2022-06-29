/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunam <seunam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 17:43:22 by seunam            #+#    #+#             */
/*   Updated: 2022/05/09 16:40:07 by seunam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*ptr;
	size_t			idx;
	size_t			tot;

	if (!size || !count)
		return (malloc(0));
	tot = size * count;
	if (tot / count != size)
		return (NULL);
	ptr = malloc(tot);
	if (!ptr)
		return (NULL);
	idx = 0;
	while (idx < tot)
	{
		ptr[idx] = 0;
		idx ++;
	}
	return ((void *)ptr);
}
