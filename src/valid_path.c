/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_path.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarvalh <rcarvalh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 12:03:01 by rcarvalh          #+#    #+#             */
/*   Updated: 2024/01/16 12:33:15 by rcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/cub3d.h"

void	valid_path(const char *path, t_cub *cub)
{
	valid_len_path(path, cub);
	if (cub->ret < 0)
		return ;
	valid_file_extension(path, cub);
	if (cub->ret < 0)
		return ;
	valid_file_path(path, cub);
}

void	valid_len_path(const char *path, t_cub *cub)
{
	cub->tmp0_0 = ft_strlen(path);
	if (cub->tmp0_0 <= 4)
		cub->ret = -3;
}

void	valid_file_extension(const char *path, t_cub *cub)
{
	if (ft_strncmp(path + (cub->tmp0_0 - 4), ".cub", 5) != 0)
		cub->ret = -4;
	cub->tmp0_0 = 0;
}

void	valid_file_path(const char *path, t_cub *cub)
{
	cub->fd_path = open(path, O_RDONLY);
	if (cub->fd_path == -1)
		cub->ret = -5;
}
