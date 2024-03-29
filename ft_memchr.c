/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 17:52:30 by oel-yous          #+#    #+#             */
/*   Updated: 2019/10/16 16:24:17 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	val;
	size_t			i;

	i = 0;
	val = (unsigned char)c;
	str = (unsigned char*)s;
	while (--n > 0)
	{
		if (str[i] == val)
			return (str + i);
		i++;
	}
	return (NULL);
}
