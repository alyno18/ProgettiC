#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 257
typedef struct{
    char nome[45];
    char regione[17];
    int area;
    int popolazione;
    double pil;
}paese;

int main(int argc, char const *argv[])
{
    paese p[MAX];
    char nome[45];
    char regione[17];
    int max = 0;
    int pos = 0;
    FILE* fp;
    fp = fopen("paesi.txt", "r");

    if (NULL == fp)
    {
        printf("impossibile aprire il file \n");
    }
    else
    {
        //riempimento struct
        for (int i = 0; i < MAX; i++)
        {
            fscanf(fp, "%s %s %d %d %lf", p[i].nome, p[i].regione, &p[i].area, &p[i].popolazione, &p[i].pil);
        }


        //ricerca paese
        printf("Inserisci il nome di un paese: ");
        scanf("%44s", nome);

        for (int j = 0; j < MAX; j++)
        {
            if(strcmp(nome, p[j].nome) == 0)
            {
                pos = j;
            }
        }

        if(pos != 0)
        {
            printf("Nome: %s -- Regione: %s -- Area: %d -- Popolazione: %d -- Pil: %f \n", p[pos].nome, p[pos].regione, p[pos].area, p[pos].popolazione, p[pos].pil);
        }
        else
        {
            printf("non trovato\n");
        }


        //ricerca regione
        printf("Inserisci il nome di una regione: ");
        scanf("%16s", regione);
        for (int k = 0; k < MAX; k++)
        {
            if(strcmp(regione, p[k].regione) == 0)
            {
                printf("Nome: %s -- Regione: %s -- Area: %d -- Popolazione: %d -- Pil: %f \n", p[k].nome, p[k].regione, p[k].area, p[k].popolazione, p[k].pil);
            }
        }


        //paese max estensione
        for (int x = 1; x < MAX; x++)
        {
            if(p[max].area < p[x].area)
            {
                max = x;
            }
        }
        printf("Il paese con la maggiore estensione è Nome: %s -- Regione: %s -- Area: %d -- Popolazione: %d -- Pil: %f \n", p[max].nome, p[max].regione, p[max].area, p[max].popolazione, p[max].pil);
        

        //ricerca pil complessivo di una regione
        double pilComplessivo = 0;
        printf("Inserisci il nome di una regione: ");
        scanf("%16s", regione);

        for (int c = 0; c < MAX; c++)
        {
            if(strcmp(regione, p[c].regione) == 0)
            {
                pilComplessivo += p[c].pil;
            }
        }
        printf("Ecco il pil complessivo in Regione: %s: %f \n", regione, pilComplessivo);
    }
    fclose(fp);
}