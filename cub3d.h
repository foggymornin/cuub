#ifndef CUB3D_H
# define CUB3D_H

//# include "libft/libft.h"
# include "mlx.h"
# include "gnl/get_next_line.h"
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <math.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

# define TILESIZE 64
# define WHITE 16777215
# define BLACK 0
# define PINK 16752084
# define YELLOW 16776960
# define PURPLE 8681416
# define GREEN 8692050
# define BLUE 11834
    void    *g_mlx;
    void    *g_mlx_win;

typedef struct  s_data {
    void        *img;
    char        *addr;
    int         bits_per_pixel;
    int         line_length;
    int         endian;
}               t_data;

typedef struct s_map
{
    int r_x;
    int r_y;
    int player_x;
    int player_y;
    int linenumber;
    size_t longestline;
    char *data;
    char **map;
    int  element;
}   t_map;

t_map sett;

t_data  img;

# define MI 2147483647
int		freeass(char *s);
char	*freeass2(char *s);
int		get_next_line(int fd, char **l);
size_t	ft_strlen(char *s);
int		searchnl(char *s);
char	*cut(char *s, int i);
char	*dupnl(char *s);
char	*ft_strjoin(char *s1, char *s2);
#define BUFFER_SIZE 100
int     ft_put(void);
void    ft_minimap(t_data img, void *mlx, void *mlx_win);

void    ft_get_map_settings(char *map);
void    ft_resolution(char *line);
int		ft_atoi(const char *str);
char    *ft_shift_line(char *line, char c);
int    ft_check_map(char* line );
int     ft_valid_character(char *l);
int     ft_wall_maria(char *l);
char		*ft_strjoin2(char *s1, char *s2);
void    draw_map();
void    draw_rect(int i, int j,int color);
void            my_mlx_pixel_put(t_data *data, int x, int y, int color);
#endif
