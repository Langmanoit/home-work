#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    FILE *d;
    d = fopen("62.txt", "w");

    int a=1234;
    int* p = &a;
    a= *p *2;
    //fprintf(d, "%c", a);
    printf("%d\n", a);

    float b=12.34;
    float* q = &b;
    b= *q * (*q);
    //fprintf(d, "%c", b);
    printf("%f\n", b);

    char c = 't';
    char* qq = &c;
    c= *qq - 32;
    //fprintf(d, "%c", c);
    printf("%c\n", c);

    int e[10]={1,2,3,4,5};
    int*qqq=&e;
    e[0]=*qqq+1;
    e[2]=qqq[2]+1;
    for (int i=0; i<5; ++i) {e[i]=qqq[i]+1;}
    //fprintf(d, "%c", c);
    printf("%d\n", e[0]);
    printf("%d\n", e[2]);
    for (int i=0; i<5; ++i) {printf("%d", e[i]);}
    printf("\n");

    int f[10]={1,2,3,4,5};
    int* pp=&f[3];
    f[0]=pp[-3]+1;
    f[4]=pp[1]+1;
    for (int i=-3; i<2; ++i) {f[i+3]=pp[i]+1;}
    printf("%d\n", f[0]);
    printf("%d\n", f[4]);
    for (int i=0; i<5; ++i) {printf("%d", f[i]);}
    printf("\n");

    char g[10]="abcdifg";
    char* ppp=&g[0];
    g[0]=ppp[0]-32;
    printf("%s\n", g);
    g[3]=ppp[3]-32;
    printf("%s\n", g);
    for (int i=0; i<5; ++i) {g[i]=ppp[i]-32;}
    printf("%s\n", g);

    int h=1234;
    int* p1 = &h;
    int** q1 =&p1;
    a=**q1*2;
    printf("%d\n", a);

    fclose(d);
    return 0;
}