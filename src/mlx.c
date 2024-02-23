/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarvalh <rcarvalh@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 12:02:05 by rcarvalh          #+#    #+#             */
/*   Updated: 2024/01/16 17:29:13 by rcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/cub3d.h"

void	init_mlx(t_cub *cub)
{
	cub->mlx = mlx_init();
	if (cub->mlx == NULL)
	{
		cub->ret = -12;
		return ;
	}
	cub->win = mlx_new_window(cub->mlx, WIDTH, HEIGHT, "cub3D");
	if (cub->win == NULL)
	{
		cub->ret = -12;
		return ;
	}
	cub->img = mlx_new_image(cub->mlx, WIDTH, HEIGHT);
	if (cub->img == NULL)
	{
		cub->ret = -12;
		return ;
	}
	cub->addr = mlx_get_data_addr(cub->img, &cub->bpp, &cub->llength, \
		&cub->endian);
	if (cub->img == NULL)
		cub->ret = -12;
}

int	destruct_mlx(t_cub *cub)
{
	mlx_clear_window(cub->mlx, cub->win);
	if (cub->img)
		mlx_destroy_image(cub->mlx, cub->img);
	cub->img = NULL;
	if (cub->win)
		mlx_destroy_window(cub->mlx, cub->win);
	cub->win = NULL;
	if (cub->mlx)
		ft_free_single((void **)&cub->mlx);
	cub->mlx = NULL;
	exit(EXIT_SUCCESS);
	return (0);
}
