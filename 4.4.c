/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

float aa(int n)
{
    float b=1;
    if (n%2==0){
        b=pow(2.0, n) / pow(3.141592, n/2);
        for (int i=1; i<=n/2; i++){
            b*=i;
        }
    }
    else{
        b=pow(2.0, n) / pow((4*3.141592), (n-1)/2);
        for (int i=1; i<=n; i++){
            b *=i;
        
        }
        for (int i=1; i<=(n-1)/2; i++){
            b=b/i;
        }
        b = b/2;
        
    }
    //printf("%lli", r);
    return b;
}


int main()
{
    int n, k;
    scanf("%i", &n);
    printf("%f", aa(n));
    //aa(a);
    return 0;
}