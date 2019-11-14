/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atfoster <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 22:00:40 by atfoster          #+#    #+#             */
/*   Updated: 2019/09/20 22:02:03 by atfoster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstfree(t_list **ukaz)
{
	t_list	*ptr;

	if (*ukaz == NULL)
		return ;
	while (*ukaz)
	{
		ptr = (*ukaz)->next;
		free((*ukaz)->content);
		free(*ukaz);
		*ukaz = NULL;
		*ukaz = ptr;
	}
	free(*ukaz);
	*ukaz = NULL;
}
