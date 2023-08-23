/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkalaman <student.42kocaeli.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 15:21:10 by fkalaman          #+#    #+#             */
/*   Updated: 2023/08/23 15:21:11 by fkalaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
int ft_abs(int x);
int	ipart(float x);

float	fpart(float x);
float	rfpart(float x);
#endif