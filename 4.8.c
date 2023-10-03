/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

double aa(double x1, double y1, double r1, double x2, double y2, double r2)
{
    double s=0;
    s=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    if (s>r1+r2)
        return 1;
    else if (s==r1+r2)
        return 2;
    else
        return 3;
}


int main()
{
    double x1, y1, r1, x2, y2, r2;
    scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &r1, &x2, &y2, &r2);
    printf("%lf", aa(x1, y1, r1, x2, y2, r2));
    //aa(a);
    return 0;
}