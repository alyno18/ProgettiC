#include <stdio.h>
#include <string.h>
#define MAX 20
int main(int argc, char const *argv[])
{
    char s[MAX];
    printf("Inserisci una parola di massimo 20 caratteri: ");
    scanf("%s", &s);

    for(int i=0;i<strlen(s);i++){
        printf("Codice carattere %d: %d\n",i, s[i]);
    }
}