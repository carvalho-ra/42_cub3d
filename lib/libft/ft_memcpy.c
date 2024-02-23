/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarvalh <rcarvalh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:46:55 by rcarvalh          #+#    #+#             */
/*   Updated: 2024/01/16 11:46:55 by rcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	unsigned char		*destcast;
	unsigned char		*srccast;
	size_t				i;

	if ((dest == NULL) && (src == NULL) && (len > 0))
		return (NULL);
	destcast = (unsigned char *)dest;
	srccast = (unsigned char *)src;
	i = 0;
	while (i < len)
	{
		destcast[i] = srccast[i];
		i++;
	}
	return (dest);
}
