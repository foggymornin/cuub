/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafajat <mafajat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 01:43:45 by mafajat           #+#    #+#             */
/*   Updated: 2021/03/18 11:46:45 by mafajat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"


void            my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
    char    *dst;

    dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
    *(unsigned int*)dst = color;
}

void            mlx_initialize(char *gamename)
{
    g_mlx = mlx_init();
    g_mlx_win = mlx_new_window(g_mlx, 1920, 1080, gamename);
    img.img = mlx_new_image(g_mlx, 1920, 1080);
    img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length,
                                 &img.endian);

    draw_map();
    //draw_rect(0,0,GREEN);

    mlx_put_image_to_window(g_mlx, g_mlx_win, img.img, 0, 0);
    mlx_loop(g_mlx);
}   

int             main(int argc, char **argv)
{
    char *l;
    char *error1 = "Error\nMissing one or more arguments\n";
    l = NULL;
    if (argc == 2)
    {
        ft_get_map_settings(argv[1]);
        mlx_initialize(argv[0] + 2);
    }
    else
        write(1, error1, ft_strlen(error1));
    return(0);
}