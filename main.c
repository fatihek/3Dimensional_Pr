/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkalaman <student.42kocaeli.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 12:00:29 by fkalaman          #+#    #+#             */
/*   Updated: 2023/08/22 14:19:20 by fkalaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include <unistd.h>
#include <math.h>
#include <stdlib.h>

void    draw_line(t_things vars, double x, double y, double start, double end)
{
    double deltax = start - x;
    double deltay = end - y;
    double origin = 2 * deltay - deltax;
    double length = sqrt(deltax * deltax + deltay * deltay);
    double angle = atan2(deltay, deltax);
    printf("\n%f\n", angle);
    int i = 0;

    while (i < length)
    {
        if (origin >= 0)
        {
            mlx_pixel_put(vars.mlx, vars.win, x + cos(angle) * i, y + sin(angle) * i, 0x00FFFFFF);
            origin = origin + 2 * deltay - 2 * deltax;
        }
        else
        {
            mlx_pixel_put(vars.mlx, vars.win, x + cos(angle) * i, y + sin(angle) * i, 0x00FFFFFF);
            origin = origin + 2 * deltay;
        }
        i++;
    }
}

// int main()
// {
//     t_things vars;

//     vars.mlx = mlx_init();
//     vars.win = mlx_new_window(vars.mlx, 1000, 1000, "FDF");
//     draw_line(vars, 100, 100, 200, 100);
//     draw_line(vars, 200, 100, 200, 200);
//     draw_line(vars, 100, 100, 100, 200);
//     draw_line(vars, 200, 200, 100, 200);
//     mlx_hook (vars.win, 17, 0, press_close_key, &vars);
//     mlx_loop(vars.mlx);  
//     return (0);
// }

int	press_close_key(t_things *vars)
{
	printf("\n\033[0;35mClosed!\033[0m\n");
	exit(1);
}