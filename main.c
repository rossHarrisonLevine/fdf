#include "fdf.h"

int main()
{
	void *mlx;
	void *win;
	int x_ang;
	int y_ang;
	int z_ang;
	int *coords;

	coords = (int*)malloc(sizeof(int)*3*9);
	coords[0] = 
	mlx = mlx_init();
	win = mlx_new_window(mlx, 400, 400, "mlx 42");
	
	mlx_loop(mlx);

}

