/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarvalh <rcarvalh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:46:41 by rcarvalh          #+#    #+#             */
/*   Updated: 2024/01/16 11:46:41 by rcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t len)
{
	unsigned char	*ustr;
	size_t			i;

	ustr = (unsigned char *)str;
	i = 0;
	while (i < len)
	{
		if (ustr[i] == (unsigned char)c)
			return ((char *)&ustr[i]);
		i++;
	}
	return (NULL);
}
