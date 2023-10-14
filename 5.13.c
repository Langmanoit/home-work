#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    char a[100];
    int n=0;
    scanf("%s", a);
    scanf("%d", &n);
    for (int i; i<n; i++){
        printf("%s ", a);
    }
    return 0;
}