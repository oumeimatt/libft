/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 10:31:23 by oel-yous          #+#    #+#             */
/*   Updated: 2019/10/17 22:52:22 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	ch;
	unsigned char	*str;

	i = 0;
	ch = (char)c;
	str = (unsigned char *)s;
	while (*str)
	{
		if (*str == ch)
			return ((char *)(str + i));
		str++;
	}
	if (ch == '\0')
		return ((char *)str);
	return (NULL);
}
