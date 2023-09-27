/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int aa(int a)
{
    int b[100][100];
    for (int i=0; i<100*100; i++)
    {
        b[i/100][i%100]=a[i/100][i%100];
    }
}


int main()
{
    int a[100][100];
    for (int i=0; i<100*100; i++)
    {
        scanf("%d", &a[i/100][i%100]);
    }
    aa(a);
    
    return 0;
}