/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

double aa(double x)
{
    double st=1e-2, min=1e-10, ds=1;
    double s=0;
    int k=0;
    while (ds>min){
        ds=st*(pow(st*k, x-1)*exp((-1)*(st*k)) + (pow(st*(k+1), x-1)*exp((-1)*(st*(k+1)))))/2;
        s+=ds;
        k+=1;
        //printf("%lf", ds);
        
    }
    //printf("%lli", r);
    return s-ds;
}


int main()
{
    double x;
    scanf("%lf", &x);
    printf("%lf", aa(x));
    //aa(a);
    return 0;
}