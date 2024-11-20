#ifndef	TEST_H
# define TEST_H

#include "libft.h"
#include "ft_printf.h"
#include "mlx.h"
# include <X11/keysym.h>
# define KEY_ESC 2

#define WIDTH 1920
#define HEIGHT 700

typedef struct	s_img {
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}				t_img;

typedef struct	s_data
{
	void	*mlx;
	void	*win;
	t_img	*img;
}				t_data;

// main.c
void		ft_mlx_pixel_put(t_img *img, int x, int y, int color);
t_data		*free_data(t_data *data);
int			main(void);

// init.c
t_data		*init_data(char	*titile);

// control.c
int			close_win(void *vars);
void		ft_mlx_hook(t_data *data);

// keyboard.c
int	key_hook(int key_code, void *param);

// color.c
int 		color_create_trgb(int t, int r, int g, int b);
int			color_get_t(int trgb);
int			color_get_r(int trgb);
int			color_get_g(int trgb);
int			color_get_b(int trgb);

#endif