/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 14:54:02 by seunam            #+#    #+#             */
/*   Updated: 2022/03/28 14:27:02 by seunam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			idx;
	unsigned char	*str;

	str = (unsigned char *)s;
	idx = 0;
	while (idx < n)
	{
		str[idx] = 0;
		idx ++;
	}
}
