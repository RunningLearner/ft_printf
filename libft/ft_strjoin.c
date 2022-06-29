/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 16:21:17 by seunam            #+#    #+#             */
/*   Updated: 2022/03/23 18:40:35 by seunam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strlen_(char *str)
{
	size_t	len;

	len = 0;
	while (*str)
	{
		str ++;
		len ++;
	}
	return (len);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	strlen;
	size_t	idx;

	if (!s1 || !s2)
		return (NULL);
	strlen = ft_strlen_((char *)s1) + ft_strlen_((char *)s2);
	str = malloc(sizeof(char) * (strlen + 1));
	if (!str)
		return (NULL);
	idx = 0;
	while (*s1)
	{
		str[idx++] = *s1++;
	}
	while (*s2)
	{
		str[idx++] = *s2++;
	}
	str[idx] = 0;
	return (str);
}
