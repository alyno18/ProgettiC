#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n = 0;
    int i = 1;

    printf("Inserisci un numero positivo: ");
    scanf("%d", &n);

printf("Ecco le hailstones: %d ", n);

    while(n != 1){
        i++;
        if(n%2 == 0)
            n = n/2;
        else
            n = 3*n+1;
    
    printf("%d ",n);
    }

    printf("\nNumero di hailstones: %d\n",i);
}