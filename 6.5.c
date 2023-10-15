#include <stdio.h>
#include <math.h>
#include <string.h>

double aaa(int* p, int n){
    for(int i=0; i<n; i++) {printf("%d", p[i]*2);}
    return 0;
}

int main()
{
    int a[100];
    int n=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {scanf("%d", &a[i]);}
    int*p = &a[0];
    aaa(p, n);
    return 0;
}