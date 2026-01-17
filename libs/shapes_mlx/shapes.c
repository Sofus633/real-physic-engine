#include "shapes.h"

void	draw_rect(t_rect rect, t_image buffer)
{
	int	x;
	int	y;

	x = rect.x;
	y = rect.y
	while (y < rect.height)
	{
		while (x < rect.width)
		{
			my_mlx_pixel_put(buffer, x, y, 0x00FF000); //BLACK
			x++;
		}
		x = rect.x;
		y++;
	}
}