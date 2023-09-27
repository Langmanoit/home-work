/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

void cube(int a)
{
    
    int c[1000];
    for (int i=a-1; i>=0; i--)
    {
        scanf("%d", &c[i]);
    }   
    for (int j=0; j < a; j++)
        printf("%d ", c[j]);
    
}
int main()
{
    int a = 0;
    scanf("%d", &a);
    cube(a);
    return 0;
}