/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemigue <alemigue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 17:48:37 by alemigue          #+#    #+#             */
/*   Updated: 2025/11/16 14:42:39 by alemigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

ssize_t read(int    fildes, void *box, size_t nbytes)
{
	size_t	i;

	i = nbytes
	box = malloc(BUFFER_SIZE + 1);
}

char    *openfile(int fd)
{
    int open;
    
    open = open(fd, O_RDONLY | O_CREATE);
    RETURN 0;
}
//___________________________________________________________________________//
//_____________Creates a string from the original with len size______________//
//___________________________________________________________________________//
char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	slen;
	size_t	i;
	char	*final;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	if (start + len > slen)
		len = slen - start;
	final = malloc(len + 1);
	if (!final)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		final[i] = s[i + start];
		i++;
	}
	final[i] = '\0';
	return (final);
}
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
//___________________________________________________________________________//
//_____________allocates n memory bytes from source to dest__________________//
//___________________________________________________________________________//
void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char		*tmp_dest;
	const unsigned char	*tmp_src;
	size_t				i;

	tmp_dest = (unsigned char *) dest;
	tmp_src = (const unsigned char *) src;
	i = 0;
	if (dest == NULL && !src)
		return (NULL);
	if (tmp_dest > tmp_src)
	{
		while (len-- > 0)
			tmp_dest[len] = tmp_src[len];
	}
	else
	{
		while (i < len)
		{
			tmp_dest[i] = tmp_src[i];
			i++;
		}
	}
	return (dest);
}