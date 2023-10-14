#include <stdio.h>
#include <math.h>
#include <string.h>

int s_strcpy(char* a, int n, char* b){
    for (int i=0; i<n; i++){
        a[i]=b[i];
    }
    a[n]='\0';
    return 0;
}

int main()
{
    char a[100], b[100];
    int n=0;
    scanf("%s", a);
    scanf("%d", &n);
    scanf("%s", b);
    s_strcpy(a, n, b);
    return 0;
}