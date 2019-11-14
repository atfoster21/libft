/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atfoster <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 16:48:08 by atfoster          #+#    #+#             */
/*   Updated: 2019/09/19 16:59:44 by atfoster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char			*ptr;
	int				i;

	if (s && f)
	{
		i = 0;
		if ((ptr = (char *)malloc(sizeof(char) * ft_strlen((char *)s) + 1)))
		{
			i = 0;
			while (s[i] != '\0')
			{
				ptr[i] = f(s[i]);
				i++;
			}
			ptr[i] = '\0';
			return (ptr);
		}
	}
	return (NULL);
}
