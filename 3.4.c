/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
//#include <math.h>

int cube(int a)
{   
    for(int i=1; i <=a ; i++)
    {
        for(int j = 0; j < i; ++j)
        {
        printf("*");
        }
        printf("\n");
    }
    return 0;
        
}


int main()
{
    int a=0, b=0;
    scanf("%i", &a);
    cube(a);
    return 0;
}