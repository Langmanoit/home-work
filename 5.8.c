#include <stdio.h>
#include <math.h>
#include <string.h>


int main()
{
    char a[1000];
    int c;
    scanf("%i %[^\n]", &c, a);
    // printf("%s", a);
    for (int i=0; a[i]; i++){
        if (a[i]>=65 && a[i]<=90){
            if (a[i]+c > 90)
                printf("%c", (a[i]+c-25));
            else
                printf("%c", a[i]+c);
        }

        else if (a[i]>=97 && a[i]<=122){
            if (a[i]+c > 122)
                printf("%c", (a[i]+c-25));
            else
                printf("%c", a[i]+c);
        }
        else 
            printf("%c", a[i]);

    }
    return 0;
}