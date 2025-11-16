/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemigue <alemigue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 17:47:41 by alemigue          #+#    #+#             */
/*   Updated: 2025/11/16 17:13:30 by alemigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
/*char    *get_next_line(int fd)
{
    //returns (string terminated by '\n')
    return ("");
    }*/
    
int main (void)
{
    int fd;
    char    *box;
    
    //box = NULL;
    fd = open("./text.txt", O_RDONLY);
    if (fd == -1) //facilita a procura de erros
        return (1);
    while (read(fd, box, BUFFER_SIZE) != 0);
    {
        box[BUFFER_SIZE] = '\0';
        printf(%s,box);
    }


    /*if (read == -1) //facilita a procura de erros
        return (2);*/
    printf ("fd numero %d\n", BUFFER_SIZE);
    close(fd);
    return(0);
}