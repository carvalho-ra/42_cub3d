/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarvalh <rcarvalh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 12:01:28 by rcarvalh          #+#    #+#             */
/*   Updated: 2024/01/16 15:34:31 by rcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/cub3d.h"

void	ft_close_fd(int *fd)
{
	close(*fd);
	*fd = 0;
}

void	ft_free_single(void **ptr)
{
	if (!*ptr)
	{
		return ;
	}
	free(*ptr);
	*ptr = NULL;
}

void	ft_free_double(char ***ptr)
{
	char	**tmp;
	size_t	i;

	if (*ptr)
	{
		tmp = *ptr;
		i = 0;
		while (tmp[i])
		{
			ft_free_single((void **)&tmp[i]);
			i++;
		}
		free(*ptr);
		*ptr = NULL;
	}
}

void	ft_free_double_int(int ***ptr, size_t size)
{
	int		**tmp;
	size_t	i;

	if (*ptr && size)
	{
	tmp = *ptr;
		i = 0;
		while (i < size)
		{
			ft_free_single((void **)&tmp[i]);
			i++;
		}
		free(*ptr);
		*ptr = NULL;
	}
}

int	quit(t_cub *cub)
{
	destroy_struct(cub);
	destruct_mlx(cub);
	return (0);
}
