/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarvalh <rcarvalh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:45:37 by rcarvalh          #+#    #+#             */
/*   Updated: 2024/01/16 11:45:37 by rcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	signal;
	int	nbr;

	signal = 1;
	while (ft_isspace(*str) == 1)
		str++;
	if ((*str == '+') || (*str == '-'))
	{
		if (*str == '-')
			signal = -1;
		str++;
	}
	nbr = 0;
	while (ft_isdigit(*str))
	{
		nbr = (10 * nbr) + (*str - '0');
		str++;
	}
	return (nbr * signal);
}
