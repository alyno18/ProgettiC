#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n; //intero che l'utente inserisce
    int c = 0; //contatore per i numeri quadrati stampati
    int max = 0; //numero quadrato massimo
    double s = 0.0; //somma numeri quadrati


    printf("Inserisci un intero (0 per terminare): ");
    scanf("%d", &n);

    while(n > 0){
        int qn = 0; //numero quadrato
        for (int i = 1; i <= n; i++){
            qn+=2*i-1;
        }
        s+=qn;
        c++;
        printf("numero quadrato %d-esimo: %d \n", n,qn);

        if(qn > max){
            max = qn;
        }

        printf("Inserisci un intero (0 per terminare): ");
        scanf("%d", &n);
    }

    if(c != 0){
        printf("La media dei numeri quadrati è: %lf \n",(s/c));
    }
    else{
        printf("Non è stato nessun numero quadrato \n");
    }
}
