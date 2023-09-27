/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int cube(int a)
{
    
    int c[1000], count=0;
    for (int i=0; i<a; i++)
    {
        scanf("%d", &c[i]);
        if (c[i] %2==0){
            count+=1;
        }
    }
    return count;
    
}
int main()
{
    int a = 0;
    scanf("%d", &a);
    printf("%d", cube(a));
    return 0;
}