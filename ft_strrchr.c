/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 11:30:13 by oel-yous          #+#    #+#             */
/*   Updated: 2019/10/17 23:02:32 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	char			ch;
	unsigned char	*str;

	str = (unsigned char *)s;
	ch = (char)c;
	i = ft_strlen((char *)str);
	if (ch == '\0')
		return ((char *)(s + i));
	while (i-- > 0)
	{
		if (str[i] == ch)
			return ((char *)str + i - 1);
	}
	return (NULL);
}
