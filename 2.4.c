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
    int n=0, b1=0, b2=0;
    scanf("%d", &n);
    for (int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d %d", &b1, &b2);
    for (int i=b1; i<b2-1; i++)
    {
        a[i]= a[i+b2-b1];
    }
    

    for (int i=0; i<b2-b1; i++)
    {
        printf("%d ", a[i]);
    }
    
    return 0;
}