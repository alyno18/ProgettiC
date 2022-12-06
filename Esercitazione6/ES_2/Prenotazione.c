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
    int numLiberi = 0;
    datiPasseggero passeggero={"","","",-1};
    FILE * fp = NULL;

    fp=fopen("clienti.dat","wb");
    
    for(int j = 0; j < 150; j++)
    {
        int r = fread(&passeggero,sizeof(datiPasseggero),1,fp);
        if(r == passeggero)
        {
            numLiberi++;
        }
    }


    if(numLiberi == 0)
    {
        printf("Volo pieno");
    }
    else
    {
        printf("Sono liberi %d posti \n", numLiberi);
        for (int k = 0; k < numLiberi; k++)
        {
            printf("Inserisci nome, cognome, nazionalità e numero bagagli del passeggero \n");
            scanf("%19s %19s %29s %d", passeggero.nome, passeggero.cognome, passeggero.nazionalita, passeggero.bagagli);
            fseek(fp,(passeggero.numero-1)*sizeof(datiPasseggero),SEEK_SET);
            fwrite(&passeggero,sizeof(datiPasseggero),1,fp);
        }
    }




    fclose(fp);
}