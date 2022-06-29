/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunam <seunam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 17:46:25 by seunam            #+#    #+#             */
/*   Updated: 2022/03/23 18:20:52 by seunam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*tmp;

	tmp = 0;
	while (*s)
	{
		if ((unsigned char)*s == (unsigned char)c)
		{
			tmp = (char *)s;
		}
		s ++;
	}
	if ((unsigned char)*s == (unsigned char)c)
		return ((char *)s);
	return (tmp);
}
