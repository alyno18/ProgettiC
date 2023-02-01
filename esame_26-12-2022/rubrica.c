#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[20];
    char cognome[20];
    char numero[10];
} contatto;

int cercaContatto(contatto c[], int size, char n[]){
    for(int i = 0;i < size;i++){
        if(strcmp(c[i].numero, n) == 0){
            return i;
        }
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    contatto c[100];

    int op;
    printf("Scegli un opzione: \n");
    printf("1-Inserisci contatto\n");
    printf("2-Cerca contatto\n");
    printf("3-Cancella contatto\n");
    printf("4-Esci\n");
    scanf("%d", &op);
    getchar();

    while(op != 4){
        if (op == 1){ //inserisci contatto
            int n = 0;
            printf("Inserisci il numero di contatti che vuoi inserire: ");
            scanf("%d", &n);
            for (int i = 0; i < n; i++){
                printf("Inserisci nome, cognome e numero del contatto: ");
                scanf("%19s %19s %9s", c[i].nome, c[i].cognome, c[i].numero);
            }
        } else if (op == 2){ //cerca contatto
            char n[10];
            printf("Inserisci il numero del contatto che vuoi cercare: ");
            scanf("%9s",n);

            int r = cercaContatto(c, 100, n);
            if(r > -1){
                printf("Ecco il contatto che hai cercato:\n");
                printf("Nome: %s -- Cognome: %s -- Numero: %s\n",c[r].nome, c[r].cognome, c[r].numero);
            }
            else{
                printf("Contatto non trovato\n");
            }
        } else if (op == 3){ //cancella contatto
            contatto vuoto={"","",""};
            char n[10];
            printf("Inserisci il numero del contatto che vuoi cancellare: ");
            scanf("%9s",n);

            int r = cercaContatto(c, 100, n);
            if(r > -1){
                c[r] = vuoto;
                printf("Cancellazione avvenuta con successo\n");
            }
            else{
                printf("Contatto non trovato\n");
            }
        } else{
            printf("Opzione errata \n");
        }

        printf("Scegli un opzione: \n");
        printf("1-Inserisci contatto\n");
        printf("2-Cerca contatto\n");
        printf("3-Cancella contatto\n");
        printf("4-Esci\n");
        scanf("%d", &op);
        getchar();
    }
}