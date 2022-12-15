#include <stdio.h>
#include <string.h>
#define MAX 100

int main(int argc, char const *argv[])
{
    int a;
    char stringa[MAX];
    char cifrata[MAX];

    printf("Inserisci una frase senza spazi: ");
    fgets(stringa, MAX, stdin);

    for(int i = 0;i < strlen(stringa);i++){
        a = stringa[i];

        if((a>=97)&&(a<=122)){
            a-=29;
            if(a>=90){
                a-=26;
            }
            cifrata[i]=a;
        }
        else{
            cifrata[i]=a;
        }
    }
    cifrata[strlen(stringa)] = '\0';
    printf("%s", cifrata);
}