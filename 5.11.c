#include <stdio.h>
#include <math.h>
#include <string.h>


int main()
{
    char a[100];
    int n=0, x=0, y=0, s=0;
    scanf("%d", &n);
    for (int i=0; i<n; i++){
        scanf("%s %d", a, &s);
        if (strcmp(a, "North")==0)
            y+=s;
        else if (strcmp(a, "East")==0)
            x+=s;
        else if (strcmp(a, "South")==0)
            y-=s;
        else if (strcmp(a, "West")==0)
            x-=s;    
    }

    printf("%d %d", x, y);
    return 0;
}