/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int aa(int n, int k, int a[n][n])
{
    int b[n][n];
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++){
            b[i][j]= a[i][j];
        }
    }
    for (int i=0; i<k; i++){
        b=bb(n, a, b);
    }
    
    
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    
}


int bb(int n, int a[n][n], int b[n][n])
{
    int c[n][n];
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            //printf("%d", a[i][j]);
            c[i][j]=0;
            for (int k=0; k<n; k++){
                c[i][j]=c[i][j] + (b[k][j] * a[i][k]);
            }
            //printf("%d ", c[i][j]);
        }
        //printf("\n");
    }
    return c;
}


int main()
{
    int n, k;
    scanf("%d", &n);
    scanf("%d", &k);
    int a[n][n];
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    aa(n, k, a);
    return 0;
}