#include <math.h>
#include <stdio.h>

int my_floor(double x)
{
    x = floor(x);
    return x;
}

int main()
{
    printf("%d", my_floor(0.8));
}