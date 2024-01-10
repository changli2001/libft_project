/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochangli <ochangli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 21:21:12 by ochangli          #+#    #+#             */
/*   Updated: 2023/12/28 15:09:28 by ochangli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	substrings_count(char const *s, char c)
{
	int	i;
	int	words;
	int	count;

	count = 0;
	words = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c && words)
		{
			count++;
			words = 0;
		}
		else if (s[i] != c)
			words = 1;
		i++;
	}
	if (words)
		count++;
	return (count);
}

static int	each_string_lenght(const char *s, char c)
{
	int	lenght;

	lenght = 0;
	while (*s != c && *s)
	{
		lenght++;
		s++;
	}
	return (lenght);
}

static char	**freeing(char **p, int number_to_free)
{
	int	i;

	i = 0;
	while (i <= number_to_free)
	{
		free(p[i]);
		i++;
	}
	free (p);
	return (NULL);
}

static char	*from_s_to_substring(char *new, const char *s, size_t len)
{
	size_t	i;

	i = 0;
	if (!new || !s)
		return (NULL);
	while (i < len)
	{
		new[i] = s[i];
		i++;
	}
	new[len] = '\0';
	return (new);
}

char	**ft_split(const char *s, char c)
{
	int		substrings;
	char	**p;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	substrings = substrings_count(s, c);
	p = malloc ((substrings + 1) * sizeof(char *));
	if (!p)
		return (NULL);
	while (i < substrings)
	{
		while (*s == c)
			s++;
		p[i] = malloc(each_string_lenght(s, c) + 1);
		if (!p[i])
			return (freeing(p, i - 1));
		from_s_to_substring(p[i], s, each_string_lenght(s, c));
		i++;
		s = s + each_string_lenght(s, c);
	}
	p[substrings] = NULL;
	return (p);
}
