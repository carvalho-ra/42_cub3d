/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarvalh <rcarvalh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:48:17 by rcarvalh          #+#    #+#             */
/*   Updated: 2024/01/16 11:48:17 by rcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;
	unsigned int	len_s;

	if (!(s) || !(f))
		return (NULL);
	len_s = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (len_s + 1));
	if (!(str))
		return (NULL);
	i = 0;
	while (i < len_s)
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[len_s] = '\0';
	return (str);
}
