#include <stdio.h>
#include <math.h>
#include <string.h>

double aaa(double a,double b,double c,double* p1,double* p2){
    double e=pow(10, -10);
    if (abs(b*b-4*a*c)<e){
        *p1 =-b/(2*a);
        printf("%lf", *p1);
    }
    else if ((b*b-4*a*c)<e){
        printf("%lf %lf", *p1, *p2);
    }
    else{
        *p1=(-b+sqrt(abs(b*b-4*a*c)))/(2*a); 
        *p2=(-b-sqrt(abs(b*b-4*a*c)))/(2*a);
        printf("%lf %lf", *p1, *p2);
    }
    //sqrt(abs(b*b-4*a*c))
    return 0;
}

int main()
{
    double a=0,b=0, c=0, x1=0, x2=0;
    scanf("%lf %lf %lf", &a, &b, &c);
    double*p1 = &x1;
    double*p2 = &x2;
    aaa(a, b, c, p1, p2);
    return 0;
}