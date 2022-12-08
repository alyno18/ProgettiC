#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 150

typedef struct{
    int numero;
    char nome[20];
    char cognome[20];
    char nazionalita[30];
    int bagagli;
} datiPasseggero;

int main(int argc, char const *argv[]){
    datiPasseggero passeggero={"","","",-1};
    FILE * fp = NULL;

    fp=fopen("clienti.dat","wb");
    
    
    printf("Inserisci numero posto (0 per finire): ");
    scanf("%d", passeggero.numero);

    while(passeggero.numero != 0){
    
        printf("Inserisci nome, cognome, nazionalità e numero bagagli del passeggero \n");
        scanf("%19s %19s %29s %d", passeggero.nome, passeggero.cognome, passeggero.nazionalita, passeggero.bagagli);

        fseek(fp,(passeggero.numero-1)*sizeof(datiPasseggero),SEEK_SET);
        fwrite(&passeggero,sizeof(datiPasseggero),1,fp);

        printf("Inserisci numero posto (0 per finire): ");
        scanf("%d", passeggero.numero);
    }
    fclose(fp);
}