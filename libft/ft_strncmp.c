/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunam <seunam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 17:46:13 by seunam            #+#    #+#             */
/*   Updated: 2022/04/08 14:17:24 by seunam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	idx;

	if (n == 0)
		return (0);
	idx = 0;
	while (idx < n)
	{
		if (s1[idx] != s2[idx] || !s1[idx])
			return ((unsigned char)s1[idx] - (unsigned char)s2[idx]);
		idx ++;
	}
	return (0);
}
