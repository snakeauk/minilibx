#include "test.h"

void		ft_mlx_pixel_put(t_img *img, int x, int y, int color);
t_data		*free_data(t_data *data);
int			main(void);

void	ft_mlx_pixel_put(t_img *img, int x, int y, int color)
{
	char	*dst;

	dst = img->addr + (y * img->line_length + x * (img->bits_per_pixel / 8));
	*(unsigned int*)dst = color;
}

t_data		*free_data(t_data *data)
{
	if (data->img)
		free(data->img);
	free(data);
	return (NULL);
}

int		main(void)
{
	t_data	*data;

	data = init_data("test mlx");
	if (!data)
		return (EXIT_FAILURE);
	for (int x = 10; x < 1000; x++)
	{
		for (int y = 10; y < 100; y++)
		{
			if (x <= 100)
				ft_mlx_pixel_put(data->img, x, y, color_create_trgb(0, 255, 0, 0));
			else if (x <= 200)
				ft_mlx_pixel_put(data->img, x, y, color_create_trgb(0, 0, 255, 0));
			else if (x <= 300)
				ft_mlx_pixel_put(data->img, x, y, color_create_trgb(0, 0, 0, 255));
			else if (x <= 400)
				ft_mlx_pixel_put(data->img, x, y, color_create_trgb(0, 255, 255, 0));
			else
				ft_mlx_pixel_put(data->img, x, y, color_create_trgb(0, 255, 0, 255));
		}
	}
	mlx_put_image_to_window(data->mlx, data->win, data->img->img, 0, 0);
	ft_mlx_hook(data);
	mlx_loop(data->mlx);
}
