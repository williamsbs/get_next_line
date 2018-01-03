/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsabates <wsabates@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 10:15:49 by wsabates          #+#    #+#             */
/*   Updated: 2017/12/18 12:42:35 by wsabates         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void		ft_gnl_buf_add(char **str, char *buf, int ret)
{
	char	*temp;

	buf[ret] = '\0';
	temp = *str;
	*str = ft_strjoin(*str, buf);
	ft_strdel(&temp);
}

int			ft_get_last_line(char **str, char **line, int *i)
{
	char	*tmp;
	int		j;

	j = *i;
	if (ft_strlen(*str) > 0)
	{
		while (str[0][j] != '\0')
		{
			if (str[0][j] == '\n')
			{
				*line = ft_strsub(*str, 0, j);
				tmp = *str;
				*str = ft_strsub(*str, j + 1, ft_strlen(*str));
				ft_strdel(&tmp);
				return (1);
			}
			j++;
		}
		*line = ft_strsub(*str, 0, ft_strlen(*str));
		ft_strdel(str);
		return (1);
	}
	return (0);
}

int			ft_putline(char **str, char **line, int *i)
{
	char	*tmp;
	int		j;

	j = *i;
	while (str[0][j] != '\0')
	{
		if (str[0][j] == '\n')
		{
			*line = ft_strsub(*str, 0, j);
			tmp = *str;
			*str = ft_strsub(*str, j + 1, ft_strlen(*str));
			ft_strdel(&tmp);
			return (1);
		}
		j++;
	}
	return (0);
}

int			get_next_line(int const fd, char **line)
{
	int				i;
	int				ret;
	char			buf[BUFF_SIZE + 1];
	static char		*str;

	i = 0;
	if (!line || fd < 0 || BUFF_SIZE <= 0)
		return (-1);
	if (str == NULL)
		str = ft_strnew(1);
	ft_bzero(buf, BUFF_SIZE + 1);
	while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		ft_gnl_buf_add(&str, buf, ret);
		if (ft_putline(&str, line, &i) == 1)
			return (1);
	}
	if (ft_get_last_line(&str, line, &i) == 1)
		return (1);
	if (ret == -1)
		return (-1);
	return (0);
}
