/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int aa(int n, int a[n][n], int b[n][n])
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
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}


int main()
{
    int n;
    scanf("%d", &n);
    int a[n][n];
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    int b[n][n];
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++){
            scanf("%d", &b[i][j]);
        }
    }
    aa(n, a, b);
    return 0;
}