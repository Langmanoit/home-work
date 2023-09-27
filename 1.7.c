/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>


int main()
{
    int n=0, m=0, sum=0;
    scanf("%d %d", &n, &m);
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=m; j++)
        {
            sum+=pow(-1, i+j)*i*j;
        }
        //printf("%d ", sum);
    }

    printf("\n");
    printf("%d", sum);
    return 0;
}