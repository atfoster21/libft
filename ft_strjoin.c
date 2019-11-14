/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atfoster <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 19:19:04 by atfoster          #+#    #+#             */
/*   Updated: 2019/09/24 13:19:15 by atfoster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;

	ptr = NULL;
	if (s1 && s2)
	{
		if ((ft_strlen(s1) + ft_strlen(s2)) < ft_strlen(s1)
				|| ft_strlen(s1) + ft_strlen(s2) < ft_strlen(s2))
			return (NULL);
		ptr = (char *)malloc(sizeof(char)
				* (ft_strlen(s1) + ft_strlen(s2) + 1));
		if (!ptr)
			return (NULL);
		ft_strcpy(ptr, s1);
		ft_strcat(ptr, s2);
	}
	return (ptr);
}
