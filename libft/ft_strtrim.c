/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsabates <wsabates@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 09:25:17 by wsabates          #+#    #+#             */
/*   Updated: 2017/11/13 11:31:10 by wsabates         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int i;
	int len;

	if (s)
	{
		i = 0;
		len = ft_strlen(s) - 1;
		while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		{
			i++;
		}
		if (s[i] == '\0')
			return (ft_strdup(s + i));
		while (s[len] == ' ' || s[len] == '\n' || s[len] == '\t')
		{
			len--;
		}
		return (ft_strsub(s, i, len - i + 1));
	}
	return (NULL);
}
