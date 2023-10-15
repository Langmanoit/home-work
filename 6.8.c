#include <stdio.h>
#include <math.h>
#include <string.h>

int aaa(char* p, char* q, char c){
    for(int i=0; i<q-p; i++){
        p[i]=c;
    }
    return 0;
}

int main()
{
    int a=3,b=9;
    char s[100]="abcdefghqwertyu";
    char c='R';
    //scanf("%d %d", &a, &b);
    aaa(&s[a], &s[b], c);
    printf("%s", s);
    return 0;
}