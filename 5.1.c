#include <stdio.h>
#include <math.h>
#include <math.h>


int main()
{
    int a;
    scanf("%s", &a);
    if (a>=65 && a<=90)
        printf("big");
    else if (a>=97 && a<=122)
        printf("Small");
    else if (a>=48 && a<=57)
        printf("Digit");
    else
        printf("Other");       
    return 0;
}