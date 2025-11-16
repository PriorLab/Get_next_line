/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemigue <alemigue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 17:47:41 by alemigue          #+#    #+#             */
/*   Updated: 2025/11/16 15:40:29 by alemigue         ###   ########.fr       */
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

    fd = open("./text.tx", O_RDONLY);
    printf ("fd numero %d\n", fd);
    close(fd);
    return(0);
}