/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

void cube(int a)
{
    
    int c[1000], k=0;
    for (int i=0; i<a; i++)
    {
        scanf("%d", &c[i]);
    }   
    for (int i=0; i < a; i++)
    {
        for (int j=0; j<a; j++)
        {
            if ((c[j] > c[i]) && (i<j))
            {
                k=c[i];
                c[i]=c[j];
                c[j]=k;
            }
                
        }
    }
    for (int i=0; i < a; i++)
        printf("%d ", c[i]);
     
    
}
int main()
{
    int a = 0;
    scanf("%d", &a);
    cube(a);
    return 0;
}