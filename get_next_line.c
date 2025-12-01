/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemigue <alemigue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 17:47:41 by alemigue          #+#    #+#             */
/*   Updated: 2025/12/01 15:59:14 by alemigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char			*bucket;
	static char		*box[1024];
	char			*line;

	bucket = malloc(BUFFER_SIZE + 1);
	if (fd < 0 || BUFFER_SIZE <= 0 || fd >= 1024)
	{
		free (bucket);
		return (NULL);
	}
	if (!bucket)
		return (NULL);
	box[fd] = ft_boxcreation_gnl(fd, box[fd], bucket);
	free (bucket);
	if (!box[fd] || box[fd][0] == '\0')
	{
		if (box[fd])
			free (box[fd]);
		box[fd] = NULL;
		return (NULL);
	}
	line = ft_extract_line_gnl(box[fd]);
	box[fd] = ft_extract_rest_gnl(box[fd]);
	return (line);
}

char	*ft_boxcreation_gnl(int fd, char *box_util, char *bucket_util)
{
	int		read_bytes;
	int		j;
	int		x;

	j = -1;
	x = -1;
	read_bytes = 1;
	while (ft_strchr_gnl(box_util) && read_bytes > 0)
	{
		read_bytes = read(fd, bucket_util, BUFFER_SIZE);
		if (read_bytes < 0)
		{
			if (box_util)
				free (box_util);
			box_util = NULL;
			return (NULL);
		}
		if (read_bytes == 0)
			break ;
		bucket_util[read_bytes] = '\0';
		box_util = ft_strjoin_gnl(box_util, bucket_util, j, x);
		if (!box_util)
			return (NULL);
	}
	return (box_util);
}

char	*ft_extract_line_gnl(char *box)
{
	char	*line;
	int		i;
	int		j;

	if (!box || box[0] == '\0')
		return (NULL);
	i = 0;
	while (box[i] && box[i] != '\n')
		i++;
	if (box[i] == '\n')
		i++;
	line = malloc(i + 1);
	if (!line)
		return (NULL);
	j = 0;
	while (j < i)
	{
		line[j] = box[j];
		j++;
	}
	line[i] = '\0';
	return (line);
}

char	*ft_extract_rest_gnl(char	*box)
{
	char	*rest;
	int		i;
	int		j;

	if (!box)
		return (NULL);
	i = 0;
	j = 0;
	while (box[i] && box[i] != '\n')
		i++;
	if (!box[i] || !box[i + 1])
		return (free(box), NULL);
	i++;
	rest = malloc(ft_strlen_gnl(box) - i + 1);
	if (!rest)
		return (free(box), NULL);
	while (box[i])
		rest[j++] = box[i++];
	rest[j] = '\0';
	free (box);
	return (rest);
}
