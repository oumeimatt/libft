/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 18:32:37 by oel-yous          #+#    #+#             */
/*   Updated: 2019/10/16 21:21:34 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		length;
	char	*temp;
	char	*str;

	length = 0;
	str = (char*)s1;
	while (s1[length] != '0')
		length++;
	temp = (char*)malloc(sizeof(char) * (length + 1));
	i = 0;
	while (s1[i] != '\0')
	{
		temp[i] = s1[i];
		i++;
	}
	return (temp);
}
