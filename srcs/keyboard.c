#include "test.h"

int	key_hook(int key_code, void *param)
{
	t_data	*data;

	data = (t_data *)param;
	if (key_code == XK_Escape)
		close_win(data);
	return (0);
}
