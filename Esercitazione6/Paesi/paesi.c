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
    FILE* fp;
    fp = fopen("paesi.txt", "r");

    if (NULL == fp){
        printf("impossibile aprire il file \n");
    }
    else{
        //riempimento struct
        for (int i = 0; i < MAX; i++)
        {
            fscanf(fp, "%s %s %d %d %lf", p[i].nome, p[i].regione, &p[i].area, &p[i].popolazione, &p[i].pil);
        }

        int op; //opzione
        printf("Scegli un opzione: \n");
        printf("1- Ricerca paese.\n");
        printf("2- Ricerca paesi della stessa regione.\n");
        printf("3- Paese con la massima estensione.\n");
        printf("4- Ricerca pil complessivo di una regione.\n");
        printf("5- esci.\n");
        scanf("%d",&op);
        getchar();


        while(op != 5){
            if(op == 1){ //ricerca paese
                int pos = 0;
                char nome[45];
                printf("Inserisci il nome di un paese: ");
                scanf("%44s", nome);

                for (int j = 0; j < MAX; j++){
                    if(strcmp(nome, p[j].nome) == 0){
                        pos = j;
                    }
                }

                if(pos != 0){
                    printf("Nome: %s -- Regione: %s -- Area: %d -- Popolazione: %d -- Pil: %f \n", p[pos].nome, p[pos].regione, p[pos].area, p[pos].popolazione, p[pos].pil);
                }
                else{
                    printf("Non trovato \n");
                }
            }else if(op == 2){ //ricerca regione
                int pos = 0;
                char regione[17];
                printf("Inserisci il nome di una regione: ");
                scanf("%16s", regione);
                for (int k = 0; k < MAX; k++){
                    if(strcmp(regione, p[k].regione) == 0){
                        pos = k;
                        printf("Nome: %s -- Regione: %s -- Area: %d -- Popolazione: %d -- Pil: %f \n", p[k].nome, p[k].regione, p[k].area, p[k].popolazione, p[k].pil);
                    }
                }
                
                if(pos == 0){
                    printf("Regione non trovata \n");
                }
            }else if(op == 3){ //paese max estensione
                int max = 0;
                for (int x = 1; x < MAX; x++){
                    if(p[max].area < p[x].area){
                        max = x;
                    }
                }
                printf("Il paese con la maggiore estensione è Nome: %s -- Regione: %s -- Area: %d -- Popolazione: %d -- Pil: %f \n",p[max].nome, p[max].regione, p[max].area, p[max].popolazione, p[max].pil);

            }else if(op == 4){ //ricerca pil complessivo di una regione
                char regione[17];
                double pilComplessivo = 0;
                printf("Inserisci il nome di una regione: ");
                scanf("%16s", regione);

                for (int c = 0; c < MAX; c++){
                    if(strcmp(regione, p[c].regione) == 0){
                        pilComplessivo += p[c].pil;
                    }
                }
                printf("Ecco il pil complessivo in Regione: %s: %f \n", regione, pilComplessivo);
            }else{
                printf("Opzione errata \n");
            }

            printf("Scegli un opzione: \n");
            printf("1- Ricerca paese.\n");
            printf("2- Ricerca paesi della stessa regione.\n");
            printf("3- Paese con la massima estensione.\n");
            printf("4- Ricerca pil complessivo di una regione.\n");
            printf("5- esci.\n");
            scanf("%d",&op);
            getchar();
        }
    }
    fclose(fp);
}