/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


int main()
{
    int n = 0;
    scanf("%d", &n);
    while (n != 1)
    {
        if (n % 2 != 0)
            n = 3 * n + 1;
        else
            n = n / 2;
        printf("%d ", n);
    }
    return 0;
}
