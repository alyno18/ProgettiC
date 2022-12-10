#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n; //intero che l'utente inserisce
    int c = 0; //contatore per i numeri pentagonali stampati
    int max = 0; //numero pentagonale massimo
    double s = 0.0; //somma numeri pentagonali


    printf("Inserisci un intero (0 per terminare): ");
    scanf("%d", &n);

    while(n > 0){
        int pn = 0; //numero pentagonale
        for (int i = 1; i <= n; i++){
            pn+=3*i-2;
        }
        s+=pn;
        c++;
        printf("numero pentagonale %d-esimo: %d \n", n,pn);

        if(pn > max){
            max = pn;
        }

        printf("Inserisci un intero (0 per terminare): ");
        scanf("%d", &n);
    }

    if(c != 0){
        printf("La media dei numeri pentagonali è: %lf \n", (s/c));
    }
    else{
        printf("Non è stato nessun numero pentagonale \n");
    }
}
