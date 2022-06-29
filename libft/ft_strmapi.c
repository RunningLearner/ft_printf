/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunam <seunam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 21:02:53 by seunam            #+#    #+#             */
/*   Updated: 2022/04/14 16:23:22 by seunam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	idx;
	unsigned int	len;

	if (!s || !f)
		return (NULL);
	len = 0;
	while (s[len])
		len ++;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	idx = 0;
	while (s[idx])
	{
		str[idx] = f(idx, s[idx]);
		idx ++;
	}
	str[idx] = 0;
	return (str);
}
