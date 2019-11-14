/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atfoster <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 19:25:24 by atfoster          #+#    #+#             */
/*   Updated: 2019/09/19 19:29:49 by atfoster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*res;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	j = ft_strlen(s);
	while (s[j - 1] == ' ' || s[j - 1] == '\t' || s[j - 1] == '\n'
			|| s[j - 1] == ',')
		j--;
	i = -1;
	while (s[++i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ',')
		j--;
	if (j <= 0)
		j = 0;
	if (!(res = (char *)malloc(sizeof(char) * j + 1)))
		return (NULL);
	s = s + i;
	i = -1;
	while (++i < j)
		res[i] = *s++;
	res[i] = '\0';
	return (res);
}
