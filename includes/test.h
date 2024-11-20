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

#endif