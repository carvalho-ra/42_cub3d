/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarvalh <rcarvalh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:48:28 by rcarvalh          #+#    #+#             */
/*   Updated: 2024/01/16 11:48:28 by rcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *plac, const char *find, size_t len)
{
	size_t	i;
	size_t	j;

	if (!(*find))
		return ((char *)plac);
	if (!(*plac) || (ft_strlen(find) > len))
		return (NULL);
	i = 0;
	while ((i < len) && plac[i])
	{
		j = 0;
		while (plac[i + j] == find[j] && plac[i + j] && find[j] && i + j < len)
			j++;
		if (find[j] == '\0')
			return ((char *)&plac[i]);
		i++;
	}
	return (NULL);
}
