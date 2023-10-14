#include <stdio.h>
#include <math.h>
#include <string.h>


int main()
{
    char a[1000];
    scanf("%s", a);
    // printf("%i", strlen(a));
    for (int i=0; a[i]; i++){
        if (a[i] != a[strlen(a)-i-1]){
            printf("No");
            return;
        }
    }

    printf("Yes");
    return 0;
}