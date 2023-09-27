/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

void cube(int n)
{
    
    int num[1000];
    int i = 0;
    while (n > 0) {
        num[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
        printf("%d", num[j]);
}

int main()
{
    int a = 0;
    scanf("%d", &a);
    cube(a);
    return 0;
}