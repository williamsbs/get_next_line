/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsabates <wsabates@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 14:45:00 by wsabates          #+#    #+#             */
/*   Updated: 2017/11/09 15:37:32 by wsabates         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t taille;

	i = 0;
	taille = ft_strlen(s1);
	while (s2[i] != '\0' && i < n)
	{
		s1[taille + i] = s2[i];
		i++;
	}
	s1[taille + i] = '\0';
	return (s1);
}
