/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjoli <gjoli@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 10:16:56 by gjoli             #+#    #+#             */
/*   Updated: 2022/04/21 10:19:04 by gjoli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*n;

	n = malloc (sizeof (t_list));
	if (n == NULL)
		return (NULL);
	n->content = content;
	n->next = NULL;
	return (n);
}
