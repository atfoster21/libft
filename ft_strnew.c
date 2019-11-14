/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atfoster <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 16:01:15 by atfoster          #+#    #+#             */
/*   Updated: 2019/09/18 20:42:35 by atfoster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char	*ptr;

	if (size + 1 < size)
		return (NULL);
	if ((ptr = (char *)malloc(sizeof(char) * (size + 1))))
	{
		ft_memset(ptr, (int)'\0', size + 1);
		return (ptr);
	}
	return (NULL);
}
