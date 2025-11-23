/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemigue <alemigue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 17:48:37 by alemigue          #+#    #+#             */
/*   Updated: 2025/11/23 17:11:21 by alemigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char    *extract_line_gnl(char *box)
{
	char    *line;
	int     i;
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
        while(j < i)
        {
            line[j] = box[j];
            j++;
        }
    line[i] = '\0';
	return (line);
}
char	*extract_rest_gnl(char	*box)
{
	char    *rest;
	int     i;
	int		j;
	int		len;

	if (!box)
		return (NULL);
	i = 0;
	j = 0;
	while(box[i] && box[i] != '\n')
		i++;
	if (!box[i])
		return(free(box), NULL);
	i++;
	if (!box[i])
		return(free(box), NULL);
	len = ft_strlen(box+i);
	rest = malloc(len + 1);
	if (!rest)
		return(NULL);
	while(box[i])
	{
		rest[j] = box[i];
		j++;
		i++;
	}
	rest[j] = '\0';
	return (free(box), rest);
}
// char	*extract_line_gnlv2(char	*box)
// {
// 	int		i;
// 	int		j;
// 	char*	line;

// 	i = 0;
// 	j = 0;
// 	if (!box || box[0] == '\0')
// 		return (NULL);
// 	while (box[i] && box[i] == '\n')
// 		i++;
// 	if (box[i] == '\n')
// 		i++;
// 	line = malloc(i + 1);
// 	if (!line)
// 		return(NULL);
// 	while (j < i);
// 	{
// 		line[j] = box[j];
// 		j++;
// 	}
// 	line[j] = '\0';
// 	return(line);
// }

//___________________________________________________________________________//
//_____________________________Unify two string______________________________//
//___________________________________________________________________________//
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	join = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!join)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		join[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		join [j + i] = s2 [j];
		j++;
	}
	join [j + i] = '\0';
	return (join);
}
//___________________________________________________________________________//
//_________________searches for an occurrence in a string____________________//
//___________________________________________________________________________//
// int	ft_strchr_gnl(const char *s, int c)
// {
// 	size_t	i;

// 	i = 0;
// 	while (s[i])
// 	{
// 		if (s[i] == (char)c)
// 			return (1);
// 		i++;
// 	}
// 	if ((char)c == '\0')
// 		return (0);
// 	return (NULL);
// }


char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *) &s[i]);
		i++;
	}
	if ((char)c == '\0')
		return ((char *) &s[i]);
	return (NULL);
}
//___________________________________________________________________________//
//_______________________________String size_________________________________//
//___________________________________________________________________________//
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}