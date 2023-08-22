/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkalaman <student.42kocaeli.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:55:11 by fkalaman          #+#    #+#             */
/*   Updated: 2023/08/21 17:58:20 by fkalaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include <math.h>

int ft_abs(int x)
{
    if (x < 0)
        x = -x;
    return (x);
}

float	fpart(float x)
{
    return x - floor(x);
}

float	rfpart(float x)
{
    return 1.0 - fpart(x);
}

int	ipart(float x)
{
    return (int)x;
}