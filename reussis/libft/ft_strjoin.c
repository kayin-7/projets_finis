/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjoli <gjoli@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 10:46:25 by gjoli             #+#    #+#             */
/*   Updated: 2022/01/28 10:46:30 by gjoli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static char	*ft_strcat(char *dest, char const *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	 int	lon;
	char	*chaine;

	if (s1 == 0 || s2 == 0)
		return (0);
	lon = (sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	chaine = ft_calloc(lon, 1);
	if (chaine == NULL)
		return (NULL);
	ft_strcat(chaine, s1);
	ft_strcat(chaine, s2);
	chaine[lon - 1] = '\0';
	return (chaine);
}
