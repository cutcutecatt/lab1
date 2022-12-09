#include <stdio.h>

#include "funcs.c"

int main()
{
    double x;
    printf("Enter x : ");
    scanf("%lf",&x);
    printf("g(x) = %lf\nf(x) = %lf \n", f(x), g(x));
    return 0;
}