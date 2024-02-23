/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarvalh <rcarvalh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:47:37 by rcarvalh          #+#    #+#             */
/*   Updated: 2024/01/16 11:47:37 by rcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int c)
{
	if (!str)
		return (0);
	while (*str != (unsigned char)c)
	{
		if (!(*str))
			return (0);
		str++;
	}
	return ((char *)str);
}
