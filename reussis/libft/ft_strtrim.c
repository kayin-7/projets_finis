/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjoli <gjoli@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 07:46:25 by gjoli             #+#    #+#             */
/*   Updated: 2022/04/18 14:44:30 by gjoli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	 int	i;
	 int	start;
	 int	j;

	start = 0;
	j = -1;
	while (set[++j])
	{
		if (s1[start] == set[j])
		{
			start++;
			j = -1;
		}
	}
	j = -1;
	i = ft_strlen(s1) - 1;
	while (set[++j])
	{
		if (s1[i] == set[j])
		{
			i--;
			j = -1;
		}
	}
	return (ft_substr(s1, start, i - start + 1));
}
