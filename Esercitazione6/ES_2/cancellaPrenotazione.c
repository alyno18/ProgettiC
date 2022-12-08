#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int numero;
    char nome[20];
    char cognome[20];
    char nazionalita[30];
    int bagagli;
} datiPasseggero;

int main(int argc, char const *argv[])
{
    int posto;
    datiPasseggero vuoto={"","","",-1};
    FILE * fp = NULL;
    fp=fopen("clienti.dat","rb");

    if(fp == NULL){
        printf("Impossibile aprire il file");
    }
    else{
        printf("Inserisci il numero di un posto da cancellare (0 per finire): ");
        scanf("%d", posto);

        while(posto != 0){
            datiPasseggero passeggero;
            fseek(fp,(posto-1)*sizeof(datiPasseggero),SEEK_SET);
            int r = fread(&passeggero, sizeof(datiPasseggero),1,fp);

            if(passeggero.numero == posto){
                fwrite(&vuoto,sizeof(datiPasseggero),1,fp);
            }
            rewind(fp);
            printf("Inserisci il numero di un posto da cancellare (0 per finire): ");
            scanf("%d", posto);
        }
    }
    fclose(fp);
}