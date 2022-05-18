/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjoli <gjoli@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 10:59:22 by gjoli             #+#    #+#             */
/*   Updated: 2022/04/11 10:59:25 by gjoli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_strlen(unsigned char *str)
{
	unsigned char	*a;

	a = str;
	while (*a)
		a++;
	return (a - str);
}

int	ft_memcmp(const void *r1, const void *r2, unsigned int n)
{
	 unsigned int	i;
	 unsigned int	l1;
	 unsigned int	l2;
	 unsigned char	*s1;
	 unsigned char	*s2;

	i = 0;
	s1 = (unsigned char *)r1;
	s2 = (unsigned char *)r2;
	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	if (l1 < l2)
		l1 = l2;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
