/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsabates <wsabates@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 11:29:13 by wsabates          #+#    #+#             */
/*   Updated: 2017/11/10 18:28:51 by wsabates         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;
	char		*ret;

	i = 0;
	j = 0;
	ret = (char*)haystack;
	if (ret[i] == '\0')
		return (NULL);
	if (needle[j] == '\0')
		return (&ret[i]);
	while (ret[i] != '\0')
	{
		j = 0;
		while (needle[j] == ret[i + j] && (i + j) < len)
		{
			if (needle[j + 1] == '\0')
			{
				return (&ret[i]);
			}
			j++;
		}
		i++;
	}
	return (0);
}
