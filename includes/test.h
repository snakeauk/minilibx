#ifndef	TEST_H
# define TEST_H

#include "libft.h"
#include "ft_printf.h"
#include "mlx.h"

typedef struct	s_data {
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}				t_data;

int 	main(void);
void	ft_mlx_pixel_put(t_data *data, int x, int y, int color);


// color.c
int color_create_trgb(int t, int r, int g, int b);
int	color_get_t(int trgb);
int	color_get_r(int trgb);
int	color_get_g(int trgb);
int	color_get_b(int trgb);

#endif