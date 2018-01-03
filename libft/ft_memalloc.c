/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsabates <wsabates@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 09:29:18 by wsabates          #+#    #+#             */
/*   Updated: 2017/12/14 22:38:20 by wsabates         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*copy;
	size_t	i;

	i = 0;
	if (size == 0)
	{
		return (NULL);
	}
	if ((copy = malloc(size)) == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		copy[i] = 0;
		i++;
	}
	return (copy);
}
