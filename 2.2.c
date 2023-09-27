/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
//#include <math.h>


int main()
{
    int a[1000];
    int n=0, el=0, in=0;
    scanf("%d", &n);
    for (int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d %d", &el, &in);
    for (int i=n-1; i>=in; i--)
    {
        a[i+1]= a[i];
    }
    a[in+1]=el;
    

    for (int i=0; i< n+1; i++)
    {
        printf("%d ", a[i]);
    }
    
    return 0;
}