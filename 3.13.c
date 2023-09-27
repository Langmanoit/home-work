/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int bb(int a);

int aa(int a)
{
    if (a==1){
        return 0;
    }
    else if (a%2==1){
        a= a * 3 + 1;
        printf("%d ", a);
        bb(a);
    }
    else 
        bb(a);
}
int bb(int a)
{
    if (a==1){
        return 0;
    }
    else if (a%2==0){
        a=a/2;
        printf("%d ", a);
        aa(a);
    
    }
}


int main()
{
    int a = 0;
    scanf("%d", &a);
    aa(a);
    return 0;
}