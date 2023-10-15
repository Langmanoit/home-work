#include <stdio.h>
#include <math.h>
#include <string.h>

double aaa(char* p){
    int c=0;
    for(int i=0; p[i]; i++) {c+=1;}
    for(int i=c-1; i>=0; i--) {printf("%c", p[i]);}
    return 0;
}

int main()
{
    char a[100];
    scanf("%s", a);
    int*p = &a[0];
    aaa(p);
    return 0;
}