/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

long long int aa(int n, int k)
{
    long long int r=1;
    for (int i=(n-k)+1; i<=n; i++)
    {
        r *=i;
    }
    
    //printf("%lli", r);
    return r;
}


int main()
{
    int n, k;
    scanf("%i %i", &n, &k);
    printf("%lli", aa(n, k));
    //aa(a);
    return 0;
}