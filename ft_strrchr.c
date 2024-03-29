/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huller <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 15:15:16 by huller            #+#    #+#             */
/*   Updated: 2019/04/14 16:02:44 by huller           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*beginning;

	beginning = (char *)s;
	while (*s != '\0')
		s++;
	if (c == 0)
		return ((char *)s);
	while (s > beginning && *s != c)
		s--;
	if (*s == c)
		return ((char *)s);
	return (NULL);
}
