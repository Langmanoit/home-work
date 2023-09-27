/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
//#include <math.h>

int cube(int a)
{   
    int sum=0;
    while (a !=0)
    {
        sum+=a%10;
        a=a/10;
    }
    return sum;
        
}


int main()
{
    int a=0, b=0;
    scanf("%i", &a);
    printf("%i", cube(a));
    return 0;
}