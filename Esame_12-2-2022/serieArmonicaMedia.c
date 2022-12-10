#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n; //intero che l'utente inserisce
    int c = 0; //contatore per le somme parziali stampate
    double max = 0.0; //somma parziale massima
    double s = 0.0; //somma delle somme parziali


    printf("Inserisci un intero (0 per terminare): ");
    scanf("%d", &n);

    while(n > 0){
        double hn = 0.0; //somma parziale
        for (int i = 1; i <= n; i++){
            hn+=1.0/i;
        }
        s+=hn;
        c++;
        printf("somma parziale %d-esima: %lf \n", n,hn);

        if(hn > max){
            max = hn;
        }

        printf("Inserisci un intero (0 per terminare): ");
        scanf("%d", &n);
    }

    if(c > 0){
        printf("La media delle somme parziali stampate è: %lf \n",(s/c));
    }
    else{
        printf("Non è stata stampata nessuna somma parziale \n");
    }
}
