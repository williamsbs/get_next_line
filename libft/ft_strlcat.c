/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsabates <wsabates@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 14:57:52 by wsabates          #+#    #+#             */
/*   Updated: 2017/11/13 11:32:08 by wsabates         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t				i;
	unsigned long		taille_dest;
	size_t				taille_src;
	size_t				taille_total;

	i = 0;
	taille_dest = ft_strlen(dst);
	taille_src = ft_strlen(src);
	while (src[i] != '\0' && (taille_dest + i) < (size - 1) && size != 0)
	{
		dst[taille_dest + i] = src[i];
		i++;
	}
	dst[taille_dest + i] = '\0';
	if (size < taille_dest)
	{
		taille_total = taille_src + size;
		return (taille_total);
	}
	return (taille_dest + taille_src);
}
