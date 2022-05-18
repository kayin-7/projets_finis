/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjoli <gjoli@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 10:46:25 by gjoli             #+#    #+#             */
/*   Updated: 2022/04/19 10:06:30 by gjoli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_wcount(char const *s, char c)
{
	int	w;
	int	i;

	i = 0;
	w = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
			i++;
		w++;
	}
	return (w);
}

char	**ft_split(char const *t, char c)
{
	 int	i[3];
	char	**res;
	char	*s;
	char	*set;

	if (t == 0)
		return (0);
	i[0] = 0;
	i[1] = -1;
	set = &c;
	s = ft_strtrim(t, set);
	res = ((char **)malloc(sizeof(char *) * (ft_wcount(s, c) + 1)));
	while (++i[1] <= ft_wcount(s, c))
	{
		res[i[1]] = 0;
		while (s[i[0]] && s[i[0]] == c)
			i[0]++;
		i[2] = i[0];
		while (s[i[0]] && s[i[0]] != c)
			i[0]++;
		if (i[0] != i[2])
			res[i[1]] = ft_substr(s, i[2], i[0] - i[2]);
	}
	free (s);
	return (res);
}
