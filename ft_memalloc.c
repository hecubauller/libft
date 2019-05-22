/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huller <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 20:30:29 by huller            #+#    #+#             */
/*   Updated: 2019/04/14 21:15:29 by huller           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*result;

	result = (void *)malloc(sizeof(void) * size);
	if (result == 0)
		return (0);
	if (result != 0)
		ft_bzero(result, size);
	return (result);
}
