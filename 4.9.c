/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

double aa(double a, double b)
{
    double d=1e-10, fa=1, fb=0, fc=0, c=0;
    while (fa>= d || fa<=- d)
    {
        //для функции x^2-2 меняя функцию редактируй три следующие строчки
        
        fa=a*a -2;
        fb=b*b -2;    
        fc=pow((a+b)/2, 2) - 2;
        
        
        if ((fa<0 && fc<=0) || (fa>0 && fc>=0))
            a=(a+b)/2;
        else{
            c=b;
            b=a;
            a=c;
        }
        
    }
    return a;
    
}


int main()
{
    double a, b;
    a=0;
    b=2;
    printf("%lf", aa(a, b));
    //aa(a);
    return 0;
}