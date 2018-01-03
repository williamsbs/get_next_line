/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsabates <wsabates@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 11:36:17 by wsabates          #+#    #+#             */
/*   Updated: 2017/11/10 18:25:22 by wsabates         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dest;
	int		i;

	i = ft_strlen(s1);
	if ((dest = (char*)malloc(sizeof(*s1) * (i + 1))) == NULL)
	{
		return (NULL);
	}
	while (i >= 0)
	{
		dest[i] = s1[i];
		i--;
	}
	return (dest);
}
