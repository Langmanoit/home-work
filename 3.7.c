/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int cube(int n)
{
    if (n==0 || n==1){
        return 0;
    }
    else if (n==2){
        return 1;
    }
    else{
        return cube(n-1)+cube(n-2)+cube(n-3);
    }
}
int main()
{
    int a = 0;
    scanf("%d", &a);
    printf("%d", cube(a));
    return 0;
}