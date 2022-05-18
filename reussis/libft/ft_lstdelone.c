/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                       :+:      :+:    :+: */
/*                                                    +:+ +:+         +:+     */
/*   By: gjoli <gjoli@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 10:16:56 by gjoli             #+#    #+#             */
/*   Updated: 2022/04/21 10:19:04 by gjoli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (del != 0 && lst != 0)
	{
		del(lst->content);
		free(lst);
	}
}
