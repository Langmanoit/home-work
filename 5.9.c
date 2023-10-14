#include <stdio.h>
#include <math.h>
#include <string.h>


int main()
{
    char a[100], b[100];
    int c=0, max=0, c2=0;
    scanf("%[^\n]", a);
    for (int i=0; a[i]; i++){
        if (a[i] !=' '){
            c+=1;
            if (c>=max){
                max=c;
            }
        }
        else
            c=0;
    }
    for (int i=0; i<strlen(a) ; i++){
        if (a[i] !=' '){
            c2+=1;
            if (c2==max){
                for (int j=0; j<= max; j++){
                    b[j] = a[i+j-max];
                }
                printf("%s", b);
                return;
            }
        }
        else
            c2=0;
    }
    return 0;
}