/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjoli <gjoli@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 07:46:25 by gjoli             #+#    #+#             */
/*   Updated: 2022/04/12 07:46:30 by gjoli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	ft_strcmp(const char *s1, const char *s2)
{
	int	l1;
	int	l2;
	int	i;

	i = 0;
	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	if (l1 < l2)
		l1 = l2;
	while (i < l1)
	{
		if (s1[i] < s2[i])
			return (-1);
		if (s1[i] > s2[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_substr(char const *s, unsigned int start, int len)
{
	        char	*str;
	unsigned int	i;
	unsigned int	j;

	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (s == 0)
		return (0);
	if (!ft_strcmp(s, ""))
		return (0);
	i = start;
	j = 0;
	if (len > (int)ft_strlen(s))
		len = (int)ft_strlen(s);
	if (start + len > ft_strlen(s))
		len = (unsigned int)(ft_strlen(s) - start);
	str = malloc (sizeof (char) * (len + 1));
	if (str == 0)
		return (0);
	while (i < (start + len) && s[i])
		str[j++] = s[i++];
	str[j] = '\0';
	return (str);
}
