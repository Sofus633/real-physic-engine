


#ifndef LIBG_G
# define LIBG_G

#define SCREEN_SIZEX 1000
#define SCREEN_SIZEY 800

#include <stddef.h>
# include "../libs/mlx_linux/mlx.h"
#include "../libs/llist/ft_list.h"
#include <sys/time.h>

typedef struct s_image
{
	void	*img;
	char	*data;
	int		width;
	int		height;
	int		bpp;
	int		size_line;
	int		endian;
}	t_image;


typedef struct s_game
{
  void *mlx;
  void *win;
  t_image *buffer;
  t_list *objects;
} t_game;

void set_default_gamedata(t_game *gamedata);
t_image *t_new_image(void *mlx, int x, int y);
void update(t_game *gamedata);
void display(t_game *gamedata);

#endif

