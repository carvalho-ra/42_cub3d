/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarvalh <rcarvalh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:47:43 by rcarvalh          #+#    #+#             */
/*   Updated: 2024/01/16 11:47:43 by rcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	len;
	char	*ptret;

	len = ft_strlen(str);
	ptret = malloc(len + 1);
	if (!ptret)
		return (NULL);
	if (ft_memcpy(ptret, str, len) == NULL)
		return (NULL);
	ptret[len] = '\0';
	return (ptret);
}	
