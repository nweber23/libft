/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nweber <nweber@student.42Heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 13:40:54 by nweber            #+#    #+#             */
/*   Updated: 2025/07/03 14:17:32 by nweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	len_needle;
	size_t	i;
	size_t	j;

	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	i = 0;
	len_needle = ft_strlen(needle);
	while (haystack[i] && i <= len - len_needle)
	{
		j = 0;
		while (needle[j] && haystack[i + j] == needle[j])
			j++;
		if (j == len_needle)
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
