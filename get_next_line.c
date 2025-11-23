/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemigue <alemigue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 17:47:41 by alemigue          #+#    #+#             */
/*   Updated: 2025/11/23 17:08:30 by alemigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
char    *get_next_line(int fd)
{
    int		read_bytes;
	char	*bucket;
	static char	*box;
    char     *line;

    if (fd < 0 || BUFFER_SIZE <= 0)
        return (NULL);
    bucket = malloc(BUFFER_SIZE + 1);
    if (!bucket)
        return (NULL);
    read_bytes = 1;
    while (!ft_strchr(box,'\n') && read_bytes > 0)
	{
        read_bytes = read(fd, bucket, BUFFER_SIZE);
        if(read_bytes < 0)
            return (free (bucket), NULL);
        bucket[read_bytes] = '\0';
	    box = ft_strjoin(box, bucket);
        if (!box)
            return (free (bucket), NULL);
	}
    if (!box || box[0] == '\0')
            return (free (box), NULL);
    line = extract_line_gnl(box);
    box = extract_rest_gnl(box);
    free (bucket);
    return(line);
}

