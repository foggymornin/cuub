#include "cub3d.h"

int     grid_color(int i, int j)
{
    if (sett.map[i][j] == '0')
        return(WHITE);
    if (sett.map[i][j] == '1')
        return(GREEN);
    return(BLACK);
}
void    draw_map()
{
    int i;
    int j;
    i = 0;
    j = 0;
    while (i < sett.linenumber && sett.map[i] )
    {
        j = 0;
        while (sett.map[i][j])
        {
            draw_rect(i,j,grid_color(i,j));
            //my_mlx_pixel_put(&g_mlx,1,1,0xffffff);
            j++;
            //ft_putnbr(j);
        }
        i++;
    }
}

void    draw_rect(int i, int j,int color)
{
    int x;
    int y;
    x = 0;
    y = 0;
    while(y != TILESIZE)
    {
        x = 0;
        while (x != TILESIZE)
        {
            my_mlx_pixel_put(&img, ((j * TILESIZE) + x) * 0.2 ,((i * TILESIZE) + y) * 0.2,color);
            x++;
        }
        y++;
    }
}