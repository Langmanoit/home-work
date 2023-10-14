#include <stdio.h>
#include <math.h>
#include <math.h>


int main()
{
    char a[100];
    scanf("%s", a);
    for (int i=0; a[i]; i++){
        for (int j=0; j<=i; j++){
            printf("%c", a[j]);
        }
        printf("\n");
    }
    return 0;
}