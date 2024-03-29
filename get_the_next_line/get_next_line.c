/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruzicka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 15:27:50 by jruzicka          #+#    #+#             */
/*   Updated: 2023/05/17 15:29:48 by jruzicka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*trim(char *line)
{
	size_t	l;
	size_t	i;
	char	*trimmed;

	i = 0;
	l = 0;
	while ((line)[i] != '\n' && (line)[i])
		i++;
	if ((line)[i] == '\n')
		i++;
	if (ft_strlen(line) - i == 0)
	{
		free(line);
		return (NULL);
	}
	trimmed = (char *)ft_calloc((ft_strlen(line) - i + 1), sizeof(char));
	if (!trimmed)
		return (NULL);
	while ((line)[i])
		trimmed[l++] = (line)[i++];
	trimmed[l] = '\0';
	free(line);
	return (trimmed);
}

char	*cut_extra(char *line)
{
	char	*ret;
	size_t	i;
	size_t	l;

	l = 0;
	i = 0;
	while (line[i] && line[i] != '\n')
		i++;
	if (line[i] == '\n')
		i++;
	ret = (char *)ft_calloc(sizeof(char), (i + 1));
	while (l < i)
	{
		ret[l] = line[l];
		l++;
	}
	ret[l] = '\0';
	free(line);
	return (ret);
}

void	extra_fnc(int bytes, char **temp, char **line, char **buffer)
{
	(*temp)[bytes] = '\0';
	*line = ft_strjoin(*line, *temp);
	if (buffer != NULL)
	{
		free(*buffer);
		*buffer = ft_strdup("");
	}
	*buffer = ft_strjoin(*buffer, *temp);
}

char	*read_fd(char **buffer, int fd)
{
	int		bytes;
	char	*line;
	char	*temp;

	line = ft_strdup("");
	line = ft_strjoin(line, *buffer);
	temp = (char *)ft_calloc(sizeof(char), (BUFFER_SIZE + 1));
	if (!temp)
		return (NULL);
	while (ft_strchr(*buffer, '\n') == NULL)
	{
		bytes = read(fd, temp, BUFFER_SIZE);
		if (bytes <= 0)
		{
			free(temp);
			if (ft_strlen(line) != 0)
				return (cut_extra(line));
			free (line);
			return (NULL);
		}
		extra_fnc(bytes, &temp, &line, buffer);
	}
	free(temp);
	return (cut_extra(line));
}

char	*get_next_line(int fd)
{
	static char	*buf[2048];
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0 || fd > 256)
		return (NULL);
	if (!buf[fd])
		buf[fd] = (char *)ft_calloc(sizeof(char), (BUFFER_SIZE + 1));
	line = read_fd(&buf[fd], fd);
	buf[fd] = trim(buf[fd]);
	return (line);
}
