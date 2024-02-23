/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarvalh <rcarvalh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:47:52 by rcarvalh          #+#    #+#             */
/*   Updated: 2024/01/16 11:47:52 by rcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joins;
	size_t	size_s1;
	size_t	size_s2;

	if (!s1 || !s2)
		return (NULL);
	size_s1 = ft_strlen(s1);
	size_s2 = ft_strlen(s2);
	joins = (char *)malloc(sizeof(char) * (size_s1 + size_s2 + 1));
	if (!joins)
		return (NULL);
	ft_strlcpy(joins, s1, (size_s1 + 1));
	ft_strlcpy((joins + size_s1), s2, (size_s2 + 1));
	return (joins);
}
