#include <stdio.h>
#include <math.h>
#include <string.h>


int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);
    for (int i=0; a[i]; i++){
        for (int j=0; b[j]; j++){
            if (a[i]!=b[j])
                printf("%c", a[i]);
        }
    } 
    
    return 0;
}