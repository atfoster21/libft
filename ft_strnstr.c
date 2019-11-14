/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atfoster <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 16:54:14 by atfoster          #+#    #+#             */
/*   Updated: 2019/09/18 20:15:16 by atfoster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t			n;
	int				i;

	n = ft_strlen(needle);
	if (n == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] != '\0' && i <= (int)(len - n))
	{
		if (haystack[i] == needle[0])
			if (!ft_strncmp(haystack + i, needle, n))
				return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}
