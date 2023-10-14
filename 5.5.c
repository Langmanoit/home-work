#include <stdio.h>
#include <math.h>
#include <string.h>


int main()
{
    char a[1000];
    scanf("%[^\n]", a);
    // printf("%i", strlen(a));
    for (int i=0; a[i]; i++){
        if (a[i]==' ' && a[i-1]!='!'){
            for (int j=strlen(a); j>=i; j--){
                a[j+1]=a[j];
            }
            a[i]='!';
        }
    }
    a[strlen(a)]='!';
    for (int i=0; a[i]; i++){
        printf("%c", a[i]);
    }
    return 0;
}