/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atfoster <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 18:58:59 by atfoster          #+#    #+#             */
/*   Updated: 2019/09/17 19:05:00 by atfoster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*p1;
	unsigned char	*p2;

	i = 0;
	p1 = (unsigned char*)s1;
	p2 = (unsigned char*)s2;
	if (ft_strlen(s1) == 0)
		return ('\0' - *p2);
	if (n == 0)
		return (0);
	while (n > i && (p1[i] && p2[i]))
	{
		if (p1[i] == p2[i])
			i++;
		else
			return (p1[i] - p2[i]);
	}
	if ((p1[i] == '\0' && p2[i] == '\0') || i == n)
		return (0);
	else
		return (p1[i] - p2[i]);
}
