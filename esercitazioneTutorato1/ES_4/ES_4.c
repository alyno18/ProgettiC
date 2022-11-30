#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n; //numero in input
    int c; //cifra separata

    printf("Inserisci un numero di 4 cifre: ");
    scanf("%d", &n);

    printf("Cifre separate: ");
    for (int i = 0; i < 4; i++){
        c = n%10;
        n/=10;
        printf("%d ", c);
    }
    printf("\n");
    
}