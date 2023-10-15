#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    FILE *d;
    d = fopen("63.txt", "w");

    int a[6]={4,8,15,16,23,42};
    int* p=&a[3];
    fprintf(d, "%d\n" , a[5]);
    fprintf(d, "%d\n" , *p);
    fprintf(d, "%d\n" , *(p+1));
    fprintf(d, "%d\n" , *(p-2));
    fprintf(d, "%d\n" , p[0]);
    fprintf(d, "%d\n" , p[1]);
    fprintf(d, "%d\n" , p[-2]);
    fprintf(d, "%d\n" , *a);
    fprintf(d, "%d\n" , p-a);
    fprintf(d, "%d\n" , (short*)p-(short*)a);
    fprintf(d, "%d\n" , (char*)p-(char*)a);

    
    fclose(d);
    return 0;
}