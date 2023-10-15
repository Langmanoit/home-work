#include <stdio.h>
#include <math.h>
#include <string.h>

double cube(double* p){
    printf("%lf", (*p)*(*p)*(*p));
    return 0;
}

int main()
{
    double a;
    scanf("%lf", &a);
    double*p=&a;
    cube(p);
    return 0;
}