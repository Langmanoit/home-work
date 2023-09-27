/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


int main()
{
    int a=0, b=0, max=0, k=0, n=0, nam=0, i=0;
    scanf("%d %d", &a, &b);
    i=a;
    for (i; i<=b; i++)
    {
        if (k> max){
            max=k;
            nam=i;
        }
        //printf("%d", i);
        //printf("\n");
        n=i;
        k=0;
        while (n != 1)
        {
            if (n % 2 != 0){
                n = (3 * n) + 1;
            }
            else
                n = n / 2;
            //printf("%d ", n);
            ++k;
        }
    }

    printf("\n");
    printf("%d  %d", nam-1, max+1);
    return 0;
}