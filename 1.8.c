/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>


int main()
{
    int a=0, b=0, c=0;
    scanf("%d %d %d", &a, &b, &c);
    for (int i=a; i<=b; i++)
    {
        if (i%c==0){
            printf("%d ", i);
        }
    }
    
    return 0;
}