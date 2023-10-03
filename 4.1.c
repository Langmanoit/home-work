/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

long long int aa(int a)
{
    long long int r=1;
    for (int i=1; i<=a; i++)
    {
        r *=i;
    }
    //printf("%lli", r);
    return r;
}


int main()
{
    int a;
    scanf("%i", &a);
    printf("%lli", aa(a));
    //aa(a);
    return 0;
}