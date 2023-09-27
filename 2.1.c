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
    int n=0;
    scanf("%d", &n);
    for (int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        a[i+n]=a[i];
    }
    
    
    for (int i=0; i< 2 * n; i++)
    {
        printf("%d ", a[i]);
    }
    
    return 0;
}