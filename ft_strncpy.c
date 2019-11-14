/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atfoster <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 20:53:09 by atfoster          #+#    #+#             */
/*   Updated: 2019/09/22 14:34:14 by atfoster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	int		i;

	i = 0;
	while (n != 0)
	{
		if (src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
			n--;
		}
		else
		{
			while (n)
			{
				dst[i] = '\0';
				i++;
				n--;
			}
		}
	}
	return (dst);
}
