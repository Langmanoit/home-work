/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
//#include <math.h>

int cube(int a)
{
    if (a%2==0)
        return 1;
    else
        return 0;
}


int main()
{
    int a=0;
    scanf("%i", &a);
    printf("%i\n ", cube(a));
    return 0;
}