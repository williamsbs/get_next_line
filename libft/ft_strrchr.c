/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsabates <wsabates@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 18:26:03 by wsabates          #+#    #+#             */
/*   Updated: 2017/11/13 09:20:44 by wsabates         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ret;

	i = 0;
	ret = (char*)s;
	i = (int)ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
		{
			return (&ret[i]);
		}
		i--;
	}
	return (NULL);
}
