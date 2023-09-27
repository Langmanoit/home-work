/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
//#include <math.h>

int cube(int a, int b)
{   
    if (a%2 !=0)
        a+=1;
        
    for(int i=a; i < b; i+=2)
    {
        printf("%i ", i);
    }
    return 0;
        
}


int main()
{
    int a=0, b=0;
    scanf("%i %i", &a, &b);
    cube(a, b);
    return 0;
}