/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunam <seunam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 17:46:33 by seunam            #+#    #+#             */
/*   Updated: 2022/04/03 17:31:18 by seunam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*startbigger(void)
{
	char	*str;

	str = malloc(1);
	if (!str)
		return (NULL);
	*str = 0;
	return (str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	idx;
	size_t	slen;

	if (!s)
		return (NULL);
	slen = 0;
	while (s[slen])
		slen ++;
	if (slen - start < len)
		len = slen - start;
	if (start > slen)
		return (startbigger());
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	idx = 0;
	while (s[idx + start] && idx < len)
	{
		str[idx] = s[start + idx];
		idx ++;
	}
	str[idx] = 0;
	return (str);
}
