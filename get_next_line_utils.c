/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alemigue <alemigue@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 17:48:37 by alemigue          #+#    #+#             */
/*   Updated: 2025/12/01 15:58:37 by alemigue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

//___________________________________________________________________________//
//_____________________________Unify two strings_____________________________//
//___________________________________________________________________________//
char	*ft_strjoin_gnl(char *s1, char const *s2, int i, int j)
{
	char	*join;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
	{
		join = malloc(ft_strlen_gnl(s2) + 1);
		if (!join)
			return (NULL);
		while (s2[++i])
			join[i] = s2[i];
		join[i] = '\0';
		return (join);
	}
	join = malloc(ft_strlen_gnl(s1) + ft_strlen_gnl(s2) + 1);
	if (!join)
		return (NULL);
	while (s1[++i])
		join[i] = s1[i];
	while (s2[++j])
		join[i + j] = s2[j];
	join[i + j] = '\0';
	free (s1);
	return (join);
}

//___________________________________________________________________________//
//_________________searches for an occurrence in a string____________________//
//___________________________________________________________________________//

int	ft_strchr_gnl(const char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (1);
	while (s[i])
	{
		if (s[i] == '\n')
			return (0);
		i++;
	}
	return (1);
}

//___________________________________________________________________________//
//_______________________________String size_________________________________//
//___________________________________________________________________________//
size_t	ft_strlen_gnl(const char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup_gnl(const char *s1)
{
	char	*dest;
	int		i;

	dest = (char *) malloc(ft_strlen_gnl(s1)+1);
	if (!dest)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
