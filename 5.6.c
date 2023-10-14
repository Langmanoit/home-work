#include <stdio.h>
#include <math.h>
#include <string.h>


int main()
{
    char a[1000];
    scanf("%s", a);
    int c=0;
    // printf("%i", strlen(a));
    for (int i=0; a[i]; i++){
        if (a[i]=='(')
            c+=1;
        else
            c-=1;
        if (c < 0){
            printf("No");
            return;
        }
    }
    if (c==0)
        printf("Yes");
    else
        printf("No");
    return 0;
}