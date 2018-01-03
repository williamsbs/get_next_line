/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsabates <wsabates@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 15:26:42 by wsabates          #+#    #+#             */
/*   Updated: 2017/11/14 19:09:30 by wsabates         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*copy;

	i = 0;
	if (!(copy = ft_memalloc(size + 1)))
	{
		return (NULL);
	}
	while (i < size)
	{
		copy[i] = '\0';
		i++;
	}
	return (copy);
}
