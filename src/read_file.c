/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarvalh <rcarvalh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 12:05:06 by rcarvalh          #+#    #+#             */
/*   Updated: 2024/01/16 12:28:04 by rcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/cub3d.h"

void	read_file(t_cub *cub)
{
	cub->tmp1_2 = get_next_line(cub->fd_path);
	while (cub->tmp1_2)
	{
		if (cub->tmp1_0)
		{
			cub->tmp1_3 = ft_strjoin(cub->tmp1_2, "\n");
			ft_free_single((void **)&cub->tmp1_2);
			cub->tmp1_1 = ft_strjoin(cub->tmp1_0, cub->tmp1_3);
			ft_free_single((void **)&cub->tmp1_0);
			ft_free_single((void **)&cub->tmp1_3);
			cub->tmp1_0 = cub->tmp1_1;
			cub->tmp1_1 = NULL;
		}
		else
		{
			cub->tmp1_3 = ft_strjoin(cub->tmp1_2, "\n");
			ft_free_single((void **)&cub->tmp1_2);
			cub->tmp1_0 = cub->tmp1_3;
			cub->tmp1_3 = NULL;
		}
		cub->tmp1_2 = get_next_line(cub->fd_path);
	}
	read_file_aux_00(cub);
	ft_close_fd(&cub->fd_path);
}

void	read_file_aux_00(t_cub *cub)
{
	if (!cub->tmp1_0)
		cub->ret = -1;
	else
	{
		cub->tmp2_0 = ft_split(cub->tmp1_0, '\n');
		ft_free_single((void **)&cub->tmp1_0);
		if (!cub->tmp2_0)
			cub->ret = -1;
	}
}
