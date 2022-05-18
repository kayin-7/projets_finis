/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjoli <gjoli@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 10:16:56 by gjoli             #+#    #+#             */
/*   Updated: 2022/04/21 10:19:04 by gjoli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;

	if (lst != 0)
	{
		while (*lst != 0)
		{
			ptr = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = ptr;
		}
	}
}
