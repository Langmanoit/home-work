/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

void cube(int a)
{
    
    int c=0, count=0;
    for (int i=0; i<a; i++)
    {
        scanf("%d", &c);
        printf("%d ", c%10);
        
    }
    
}
int main()
{
    int a = 0;
    scanf("%d", &a);
    cube(a);
    return 0;
}