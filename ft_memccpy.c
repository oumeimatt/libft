/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 15:05:47 by oel-yous          #+#    #+#             */
/*   Updated: 2019/10/18 00:36:17 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char		*str1;
	const char	*str2;
	size_t		i;

	i = 0;
	str1 = dst;
	str2 = src;
	while (i < n)
	{
		if (str2[i] == c)
		{
			str1[i] = str2[i];
			return (&str1[i]);
		}
		str1[i] = str2[i];
		i++;
	}
	return (NULL);
}
