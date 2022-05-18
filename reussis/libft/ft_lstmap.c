/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjoli <gjoli@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 10:16:56 by gjoli             #+#    #+#             */
/*   Updated: 2022/04/21 10:19:04 by gjoli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*fnew;
	t_list	*start;

	if (lst && f)
	{
		fnew = ft_lstnew(f(lst->content));
		if (!fnew)
			return (0);
		start = fnew;
		while (lst->next)
		{
			lst = lst->next;
			fnew = ft_lstnew(f(lst->content));
			if (!fnew)
			{
				ft_lstclear(&start, del);
				return (0);
			}
			ft_lstadd_back(&start, fnew);
		}
		return (start);
	}
	return (0);
}
