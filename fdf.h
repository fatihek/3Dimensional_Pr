#ifndef FDF_H
# define FDF_H
# define PI 3.14159

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "../../minilibx_macos/mlx.h"

typedef struct t_vectors
{
    int x;
    int y;
}   t_vectors;

typedef struct t_things
{
    t_vectors   vectors;
    int         vecs[2][2];
    void		*mlx;
	void		*win;
    int         muck;
}   t_things;

int	press_close_key(t_things *vars);
#endif