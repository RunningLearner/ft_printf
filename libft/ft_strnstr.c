/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunam <seunam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 17:46:20 by seunam            #+#    #+#             */
/*   Updated: 2022/03/25 10:51:10 by seunam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	idx;
	size_t	idx2;

	if (*needle == 0)
		return ((char *)haystack);
	idx = 0;
	while (haystack[idx] && idx < len)
	{
		idx2 = 0;
		while (haystack[idx + idx2] == needle[idx2] && idx + idx2 < len)
		{
			idx2 ++;
			if (needle[idx2] == 0)
				return ((char *)&haystack[idx]);
		}
		idx ++;
	}
	return (0);
}
