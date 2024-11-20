#include "test.h"

void	ft_mlx_pixel_put(t_data *data, int x, int y, int color);
int		main(void);

void	ft_mlx_pixel_put(t_data *data, int x, int y, int color)
{
	char	*dst;

	dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
	*(unsigned int*)dst = color;
}

int		main(void)
{
	void	*mlx;
	void	*mlx_win;
	t_data	img;

	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, 1920, 1080, "test mlx window");
	img.img = mlx_new_image(mlx, 1920, 1080);
	img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length, &img.endian);
	for (int x = 10; x < 1000; x++)
	{
		for (int y = 10; y < 100; y++)
		{
			if (x <= 100)
				ft_mlx_pixel_put(&img, x, y, 0x00FF0000);
			else if (x <= 200)
				ft_mlx_pixel_put(&img, x, y, 0x0000FF00);
			else if (x <= 300)
				ft_mlx_pixel_put(&img, x, y, 0x000000FF);
			else if (x <= 400)
				ft_mlx_pixel_put(&img, x, y, 0x00FFFF00);
			else
				ft_mlx_pixel_put(&img, x, y, 0x00FF00FF);
		}
	}
	mlx_put_image_to_window(mlx, mlx_win, img.img, 0, 0);
	mlx_loop(mlx);
}
