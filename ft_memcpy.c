/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbubak <jbubak@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 20:40:50 by jbubak            #+#    #+#             */
/*   Updated: 2025/05/27 11:32:19 by jbubak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*newdest;
	const unsigned char	*tempsrc;

	i = 0;
	newdest = dest;
	tempsrc = src;
	while (i < n)
	{
		newdest[i] = tempsrc[i];
		i++;
	}
	return (newdest);
}
