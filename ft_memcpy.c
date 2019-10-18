/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 11:59:07 by oel-yous          #+#    #+#             */
/*   Updated: 2019/10/17 11:58:31 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*str1;
	const char	*str2;
	size_t		i;

	i = 0;
	str1 = dst;
	str2 = src;
	while (i < n)
	{
		str1[i] = str2[i];
		i++;
	}
	return (dst);
}
