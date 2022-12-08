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
    FILE * fp = NULL;
    fp=fopen("clienti.dat","ab");

    datiPasseggero vuoto={"","","",-1};
    for(int i = 0; i < 150; i++)
    {
        fwrite(&vuoto,sizeof(datiPasseggero),1,fp);
    }
    fclose(fp);
}
