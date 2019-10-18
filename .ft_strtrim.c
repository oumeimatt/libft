/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-yous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 10:56:52 by oel-yous          #+#    #+#             */
/*   Updated: 2019/10/13 13:25:41 by oel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
char    *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *newstr;
	size_t i;

	i = 0;
	newstr = (char*)malloc(sizeof(char) * (len + 1));
	if (newstr == NULL)
		return (NULL);
	while (len-- > 0)
	{
		newstr[i] = s[start];
		i++;
		start++;
	}
	newstr[len] = '\0';
	return (newstr);
}
int		ft_strlen(char *str)
{
	int i ;
	i =0;
	while (str[i] != '\0')
		i++;
	return (i);
}
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t begin;
	size_t end;
	size_t len;
	size_t i;

	begin = 0;
	i = 0;
	while (s1[begin] != '\0' && set[i])
	{
		while (s1[begin] != set[i])
			i++;
		if (s1[begin] == set[i])
			begin++;
	}
	end = ft_strlen((char*)s1);
	i = 0;
	while (begin < end && set[i])
	{
		while (s1[end - 1] == set[i])
			i++;
		end--;
	}
	len = end - begin;
	return (ft_substr(s1, begin, len));
}
int main ()
{
	char *res;
	res = ft_strtrim("ababbahellohellohaba", "ab");
	printf ("%s" ,res);
	return (0);
}

