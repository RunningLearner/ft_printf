/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seunam <seunam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 09:30:17 by seunam            #+#    #+#             */
/*   Updated: 2022/04/14 16:22:46 by seunam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	idx;

	if (!s || !f)
		return ;
	idx = 0;
	while (s[idx])
	{
		f(idx, &s[idx]);
		idx ++;
	}
}
