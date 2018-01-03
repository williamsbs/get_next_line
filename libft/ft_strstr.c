/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsabates <wsabates@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 17:38:05 by wsabates          #+#    #+#             */
/*   Updated: 2017/11/13 09:07:02 by wsabates         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		j;
	char	*ret;

	i = 0;
	j = 0;
	ret = (char*)haystack;
	if (ft_strlen(needle) == 0)
		return (ret);
	while (ret[i] != '\0')
	{
		j = 0;
		while (needle[j] == ret[i + j])
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
