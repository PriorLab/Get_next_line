/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemigue <alemigue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 17:48:41 by alemigue          #+#    #+#             */
/*   Updated: 2025/12/01 15:55:46 by alemigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

/*___________________________BIBLIOTECAS______________________________________*/

# include <stdlib.h>	//open
# include <unistd.h>	//free
# include <fcntl.h>	//read
# include <stdio.h>
/*___________________________PROTOTIPOS_______________________________________*/

char	*get_next_line(int fd);
char	*ft_strjoin_gnl(char *s1, char const *s2, int i, int j);
int		ft_strchr_gnl(const char *s);
size_t	ft_strlen_gnl(const char *s);
char	*ft_extract_rest_gnl(char	*box);
char	*ft_extract_line_gnl(char *box);
char	*ft_boxcreation_gnl(int fd, char *box_util, char *bucket_util);
char	*ft_strdup_gnl(const char *s1);

/*___________________________Structs__________________________________________*/
typedef struct s_list
{
	char			*buf;
	struct s_list	*next;
}	t_list;

#endif 
