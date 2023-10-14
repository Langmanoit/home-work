#include <stdio.h>
#include <math.h>
#include <math.h>


int main()
{
    int a;
    scanf("%s", &a);
    if (a>=65 && a<=90)
        printf("%i", a-64);
    else if (a>=97 && a<=122)
        printf("%i", a-96);
    else
        printf("Other");       
    return 0;
}