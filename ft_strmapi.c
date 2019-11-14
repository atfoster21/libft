/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atfoster <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 17:08:28 by atfoster          #+#    #+#             */
/*   Updated: 2019/09/19 17:18:55 by atfoster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ptr;
	unsigned int	i;

	if (s && f)
	{
		i = 0;
		if ((ptr = (char *)malloc(sizeof(char) * ft_strlen((char *)s) + 1)))
		{
			i = 0;
			while (s[i] != '\0')
			{
				ptr[i] = f(i, s[i]);
				i++;
			}
			ptr[i] = '\0';
			return (ptr);
		}
	}
	return (NULL);
}
