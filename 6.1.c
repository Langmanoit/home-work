#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    FILE *d;
    d = fopen("61.txt", "w");

    int a=1234;
    int* p = &a;
    fprintf(d, "%c", p);
    double a=12.34;
    double* p= &a;
    fprintf(d, "%c", p);
    char a='(';
    char* p=&a;
    fprintf(d, "%c", p);
    int a[5]={1, 2, 3, 4, 5};
    int* p= &a;
    fprintf(d, "%c", p);
    char a[10]="abcde";
    char* p[2]=&a;
    fprintf(d, "%c", p);








    fclose(d);
    return 0;
}