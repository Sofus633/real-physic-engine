#include "libg.h"

void set_default_gamedata(t_game *gamedata)
{
  gamedata->mlx = mlx_init();
  gamedata->win = mlx_new_window(gamedata->mlx, SCREEN_SIZEX, SCREEN_SIZEY, "so_long");
}
