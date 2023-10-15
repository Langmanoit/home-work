#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    char a[1000], b[100], d[100];
    int c=0;
    scanf("%s %s %d", b, d ,c);
    FILE *b;
    FILE *d;
    b = fopen(b, "r");
    d = fopen(d, "w");
    fscanf(b, "%[^\n]", a);

    for (int i=0; a[i]; i++){
        if (a[i]>=65 && a[i]<=90){
            if (a[i]+c > 90)
                fprintf(d, "%c", (a[i]+c-25));
            else
                fprintf(d, "%c", a[i]+c);
        }

        else if (a[i]>=97 && a[i]<=122){
            if (a[i]+c > 122)
                fprintf(d, "%c", (a[i]+c-25));
            else
                fprintf(d, "%c", a[i]+c);
        }
        else 
            fprintf(d, "%c", a[i]);
    }
    fclose(b);
    fclose(d);
    return 0;
}