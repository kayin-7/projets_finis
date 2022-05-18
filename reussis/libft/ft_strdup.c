/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjoli <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 12:07:23 by gjoli             #+#    #+#             */
/*   Updated: 2022/01/25 12:07:25 by gjoli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static char	*ft_strcpy(char *dest, char *src)
{	
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*ptr;

	ptr = malloc(sizeof(char) * ft_strlen(src) + 1);
	if (ptr == NULL)
		return (0);
	ft_strcpy(ptr, src);
	return (ptr);
}
