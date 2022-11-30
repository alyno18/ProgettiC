#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int num;
    int t;
    int r;
    r=0;
    t=1; 
    num=-1;
    while(num<0) {
    printf("Inserisci un numero: ");
    scanf("%d", &num);
    }
    do {
        t*=2;
    }
    while(t<num);
    do {
        if(num>=t){
            r=1;
            num-=t;
            t/=2;
            printf("1");
        }

        else {
            t/=2;
            if(r==1){
                printf("0");
            }
        }
    }
    while(t!=0);
    printf("\n");

}