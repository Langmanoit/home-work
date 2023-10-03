/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

double aa(double x1, double y1, double x2, double y2)
{
    double s=0;
    s=(x1*x2 + y1*y2)/(sqrt(x1*x1 + y1*y1)*sqrt(x2*x2 + y2*y2));
    s= acos(s);
    return s*180/3.14159265359;
}


int main()
{
    double x1, y1, x2, y2;
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    printf("%lf", aa(x1, y1, x2, y2));
    //aa(a);
    return 0;
}