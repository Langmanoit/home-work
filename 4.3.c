/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

float aa(int a, int b)
{
    float r=0;
    if (a%4==0){
        r=(float)b/366;
    }
    else{
        r=(float)b/365;
    }
    //printf("%lli", r);
    return r;
}


int main()
{
    int n, k;
    scanf("%i %i", &n, &k);
    printf("%f", aa(n, k));
    //aa(a);
    return 0;
}