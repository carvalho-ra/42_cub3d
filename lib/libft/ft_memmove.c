/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarvalh <rcarvalh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:47:00 by rcarvalh          #+#    #+#             */
/*   Updated: 2024/01/16 11:47:00 by rcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*undest;
	unsigned char	*unsrc;

	undest = (unsigned char *)dest;
	unsrc = (unsigned char *)src;
	if (unsrc < undest)
	{
		while (len > 0)
		{
			ft_memcpy(undest + (len - 1), unsrc + (len - 1), 1);
			len--;
		}
	}
	else
		ft_memcpy(undest, unsrc, len);
	return (dest);
}
