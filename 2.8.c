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
    int n = 0, k = 0, b2 = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    //scanf("%d %d", &b1, &b2);
    
    scanf("%d", &k);
    printf("\n");
    for (int i = 0; i < (k%n); i++)
    {
        printf("%d ", a[n-(k%n)+i]);
    }
    for (int i = 0; i < n-k; i++)
    {
        printf("%d ", a[i]);
    }
    
    
    return 0;
}