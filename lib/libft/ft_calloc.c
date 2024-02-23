/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarvalh <rcarvalh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:45:52 by rcarvalh          #+#    #+#             */
/*   Updated: 2024/01/16 11:45:52 by rcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t qtd, size_t len)
{
	void	*ptr;

	if ((qtd >= INT_MAX) || (len >= INT_MAX))
		return (NULL);
	if (qtd == 0)
		qtd = 1;
	if (len == 0)
		len = 1;
	ptr = malloc(qtd * len);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, (qtd * len));
	return (ptr);
}
