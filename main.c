/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemigue <alemigue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 14:07:23 by alemigue          #+#    #+#             */
/*   Updated: 2025/12/01 16:01:47 by alemigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include "get_next_line.h"

int	main(void)
{
	int		fd;
	char	*line;

	line = "a";
	while (line)
	{
		line = get_next_line(0);
		printf("%s", line);
		free(line);
	}
	return (0);
}

	/*line = "a";
	while (line)
    {
            line = get_next_line(0);
            printf("%s", line);
            free(line);
    }
	return(0);
	
	int     fd = open("1char.txt", O_RDONLY);
        line = NULL;
        int i = 0;
        while (i < 4)
        {
                line = get_next_line(fd);
                printf("%s", line);
                free(line);
                i++;
        }

		
	fd = open("1char.txt", O_RDONLY);
	if (fd < 0)
		return (1);
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("%s", line);
		free(line);
	}
	close (fd);
	return (0);*/