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

int main(int argc, char const *argv[])
{
    FILE * fp = NULL;
    fp=fopen("clienti.dat","rb");

    if(fp == NULL){
        printf("Impossibile aprire il file");
    }
    else{
        int posto;
        printf("Inserisci il numero di un posto: ");
        scanf("%d", posto);

        while(posot != 0){
            datiPasseggero passeggero;
            fseek(fp,(posto-1)*sizeof(datiPasseggero),SEEK_SET);
            int r = fread(&passeggero, sizeof(datiPasseggero),fp);
            if(r != 0 && passeggero.numero != 0){
                printf("Nome: %s -- Cognome: %s -- Nazionalità: %s -- Bagagli: %d", passeggero.nome, passeggero.cognome, passeggero.nazionalita, passeggero.bagali);
            }
        }
    }
}