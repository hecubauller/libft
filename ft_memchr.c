/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huller <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 21:43:13 by huller            #+#    #+#             */
/*   Updated: 2019/04/18 23:36:45 by huller           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*p;

	if (!n)
		return (0);
	i = 0;
	p = ((const unsigned char *)s);
	while (i < (n - 1) && *p != (unsigned char)c)
	{
		p++;
		i++;
	}
	if (*p == (unsigned char)c)
		return ((void *)p);
	return (NULL);
}
