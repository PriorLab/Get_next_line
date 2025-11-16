/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemigue <alemigue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 17:48:41 by alemigue          #+#    #+#             */
/*   Updated: 2025/11/16 15:39:23 by alemigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

/*___________________________BIBLIOTECAS______________________________________*/

#include<stdlib.h>	//open
#include<unistd.h>	//free
#include<fcntl.h>	//read
#include <stdio.h>
/*___________________________PROTOTIPOS_______________________________________*/

char    *get_next_line(int fd);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlen(const char *s);
void	*ft_memmove(void *dest, const void *src, size_t len);
void	*ft_memcpy(void *dest, const void *src, size_t len);

/*___________________________Structs__________________________________________*/
typedef struct s_list
{
	char			*buf;
	struct s_list	*next;
}	t_list;





# endif 
