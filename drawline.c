#include "fdf.h"
#include "./libft/libft.h"
void drawline(t_env *win)
{
	t_bresen	*bres;

	bres = (t_bresen*)malloc(sizeof(t_bresen));
	win->rise = win->y2 - win->y1;
	win->run = win->x2 - win->x1;
	win->m = win->rise / win->run;
	bres->threshold = .5;
	bres->thresholdinc = 1;
	bres->x = win->x1 + 200;
	bres->y = win->y1 + 200;
	bres->adjust = 1;
	bres->offset = 0;

	while (bres->x < win->x2 + 1)
	{
	mlx_pixel_put(win->mlx, win->win, bres->x, bres->y, 0x00FF00FF);
		bres->offset += win->m;
		if (bres->offset >= bres->threshold)
			{
				bres->y += bres->adjust;
				bres->threshold += bres->thresholdinc;
			}
		bres->x++;
	}
	
//	if (-1 < win->m || win->m > 1)
//	{
//		win->m = ft_abs(win->rise) * 2;
//		bres->threshold = ft_abs(win->run);
//		bres->offset = ft_abs(win->run) * 2;
//		if (win->x2 < win->x1)
//		{
//			win->tmp = win->x1;
//			win->x1 = win->x2;
//			win->x2 = win->tmp;
//		}
//		while (win->x2 < 
	mlx_loop(win->mlx);
}
int main(void)
{
	t_env	*win;
	win = (t_env*)malloc(sizeof(t_env));
	win->tit = "I'm Mister Window, look at me!";
	win->mlx = mlx_init();
	win->win = mlx_new_window(win->mlx, 400, 400, win->tit);

	win->x1 = 0;
	win->x2 = 15;
	win->y1 = 0;
	win->y2 = 6;

	drawline(win);
}
