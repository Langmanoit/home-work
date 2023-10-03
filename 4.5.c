/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

float aa(int n)
{
    float b=0;
    for (int i=1; i<=n; i++){
        b += (float)pow(-1, (i+1))/(2*i-1);
    }
    //printf("%lli", r);
    return b*4;
}


int main()
{
    int n, k;
    scanf("%i", &n);
    printf("%f", aa(n));
    //aa(a);
    return 0;
}