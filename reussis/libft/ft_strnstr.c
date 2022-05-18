/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                        :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: gjoli <gjoli@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 19:04:26 by gjoli             #+#    #+#             */
/*   Updated: 2022/04/01 19:04:26 by gjoli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, int len)
{
	 int	i;

	i = -1;
	if (little[0] == 0 && len < 1)
		return ((char *) big);
	if ((ft_strlen(big) < ft_strlen(little)) || len == 0)
		return (0);
	if (little[0] == 0 || big[0] == 0)
		return ((char *) big);
	if (len < 0)
		len = ft_strlen(big);
	i = -1;
	while (big[++i] && i < len && i +(int) ft_strlen(little) <= len)
		if (!ft_strncmp (big + i, little, ft_strlen(little)))
			return ((char *) big + i);
	return (0);
}
