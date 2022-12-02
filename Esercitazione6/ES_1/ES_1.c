#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 257
typedef struct{
    char nome[45];
    char regione[17];
    int area;
    int popolazione;
    double pil;
}paese;

int main(int argc, char const *argv[])
{
    paese p[max];
    char n[45];
    int pos = 0;
    FILE* fp;
    fp = fopen("paesi.txt", "r");

    if (NULL == fp)
    {
        printf("impossibile aprire il file \n");
    }

    for (int i = 0; i < max; i++)
    {
        fscanf(fp, "%s %s %d %d %lf", p[i].nome, p[i].regione, &p[i].area, &p[i].popolazione, &p[i].pil);
    }


    printf("Inserisci il nome di uno stato: ");
    scanf("%s", n);

    for (int j = 0; j < max; j++)
    {
        if(strcmp(n, p[j].nome) == 0)
        {
            pos = j;
        }
    }

    if(pos == 0)
    {
        printf("Nome: %s -- Regione: %s -- Area: %d -- Popolazione: %d -- Pil: %f \n", p[pos].nome, p[pos].regione, p[pos].area, p[pos].popolazione, p[pos].pil);
    }
    else
    {
        printf("non trovato\n");
    }
    fclose(fp);
}