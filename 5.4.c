#include <stdio.h>
#include <math.h>
#include <string.h>


int main()
{
    char a[100];
    char b[100];
    scanf("%s", a);
    scanf("%s", b);
    int la=strlen(a), lb=strlen(b);
    if (la >= lb){
        for (int i=0; a[i]; i++){
            printf("%c", a[i]);
            printf("%c", b[i]);
        }
    }
    else{
        for (int i=0; b[i]; i++){
            printf("%c", a[i]);
            printf("%c", b[i]);
        }
    }

    return 0;
}