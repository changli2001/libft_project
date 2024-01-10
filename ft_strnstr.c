/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochangli <ochangli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 15:10:51 by ochangli          #+#    #+#             */
/*   Updated: 2023/12/28 16:39:33 by ochangli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	if (*needle == '\0')
		return ((char *)haystack);
	if (!haystack && len == 0)
		return (NULL);
	while (*haystack && len)
	{
		if (*haystack == *needle)
		{
			if (ft_strncmp (haystack, needle, ft_strlen (needle)) == 0
				&& len >= ft_strlen (needle))
			{
				return ((char *)haystack);
			}
		}
		haystack++;
		len--;
	}
	return (NULL);
}
