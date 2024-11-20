#include "test.h"

int		close_win(void *data);
void	ft_mlx_hook(t_data *data);

int		close_win(void *param)
{
	t_data	*data;

	data = (t_data *)param;
	mlx_destroy_window(data->mlx, data->win);
	free_data(data);
	exit (EXIT_SUCCESS);
}

void	ft_mlx_hook(t_data *data)
{
	mlx_hook(data->win, 2, 1, key_hook, data);
	mlx_hook(data->win, 17, 0, close_win, data);
}
