/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atfoster <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 20:13:04 by atfoster          #+#    #+#             */
/*   Updated: 2019/09/24 13:44:44 by atfoster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count_words(const char *str, char p)
{
	int				word;
	int				i;

	i = 0;
	word = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] == p && str[i + 1] != p)
			word++;
		i++;
	}
	if (str[0] != '\0')
		word++;
	return (word);
}

static char		*ft_word(const char *str, char c, int *n)
{
	char			*s;
	int				i;

	if (!(s = (char*)malloc(sizeof(s) * ft_strlen(str) + 1)))
		return (NULL);
	i = 0;
	while (str[*n] != c && str[*n])
	{
		s[i] = str[*n];
		i += 1;
		*n += 1;
	}
	s[i] = '\0';
	while (str[*n] == c && str[*n])
		*n += 1;
	return (s);
}

char			**ft_strsplit(char const *s, char c)
{
	int				i;
	int				j;
	int				wrd;
	char			**r;

	r = NULL;
	if (s)
	{
		i = 0;
		j = 0;
		wrd = ft_count_words(s, c);
		if (!(r = (char **)malloc(sizeof(r) * (ft_count_words(s, c) + 1))))
			return (NULL);
		while (s[i] == c && s[i])
			i++;
		while (j < wrd && s[i])
		{
			r[j] = ft_word(s, c, &i);
			j++;
		}
		r[j] = NULL;
	}
	return (r);
}
