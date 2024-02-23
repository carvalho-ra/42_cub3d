/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarvalh <rcarvalh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:48:02 by rcarvalh          #+#    #+#             */
/*   Updated: 2024/01/16 11:48:02 by rcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t len)
{
	size_t	size_src;

	size_src = ft_strlen(src);
	if (len == 0)
		return (size_src);
	if ((size_src + 1) < len)
		ft_memcpy(dest, src, (size_src + 1));
	else
	{
		ft_memcpy(dest, src, (len - 1));
		dest[len - 1] = '\0';
	}
	return (size_src);
}
