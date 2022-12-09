#include <stdio.h>

typedef struct{
    char nome[20];
    char cognome[20];
    char nazionalita[30];
    int bagagli;
} passeggero;

int main(int argc, char const *argv[]){
    FILE * fp = NULL;
    fp = fopen("prenotazioni.dat","wb+");

    if(fp == NULL){
        printf("Impossibile aprire il file\n");
    }
    else{
        passeggero vuoto={"","","",-1};
        for(int i=0;i<150;i++){
            fwrite(&vuoto,sizeof(passeggero),1,fp);
        }

        int op; //opzione

        printf("Scegli un opzione: \n");
        printf("1- prenota.\n");
        printf("2- verifica per posto.\n");
        printf("3- cancella prenotazione.\n");
        printf("4- stampa lista prenotazioni.\n");
        printf("5- esci.\n");
        scanf("%d",&op);
        getchar();

        while(op != 5){
            if(op == 1){ //preontazione
                passeggero p;
                int posto;
                printf("Inserisci numero posto (0 per finire): ");
                scanf("%d", &posto);

                while(posto != 0){
                    if(posto<1 || posto>150){
                        printf("Numero di posto errato \n");
                    }
                    else{
                        fseek(fp,(posto-1)*sizeof(passeggero),SEEK_SET);
                        fread(&p,sizeof(passeggero),1,fp);
                        if(p.bagagli == -1){
                            printf("Inserisci nome, cognome, nazionalità e numero bagagli del passeggero \n");
                            scanf("%19s %19s %29s %d", p.nome, p.cognome, p.nazionalita, &p.bagagli);

                            fseek(fp,-sizeof(passeggero),SEEK_CUR);
                            fwrite(&p,sizeof(passeggero),1,fp);
                            printf("Prenotazione effettuata con successo \n");
                        }
                        else{
                            printf("Posto prenotato \n");
                        }
                    }
                    printf("Inserisci numero posto (0 per finire): ");
                    scanf("%d", &posto);
                }
            }else if(op == 2){ //verifica prenotazione
                passeggero p;
                int posto;
                printf("Inserisci numero posto (0 per finire): ");
                scanf("%d", &posto);

                while(posto != 0){
                    if(posto<1 || posto>150){
                        printf("Numero di posto errato \n");
                    }
                    else{
                        fseek(fp,(posto-1)*sizeof(passeggero),SEEK_SET);
                        fread(&p,sizeof(passeggero),1,fp);
                        if(p.bagagli != -1){
                            printf("Posto prenotato: %s %s %s bagagli: %d \n", p.cognome, p.nome, p.nazionalita, p.bagagli);
                        }
                        else{
                            printf("Posto non prenotato \n");
                        }
                    }
                    printf("Inserisci numero posto (0 per finire): ");
                    scanf("%d", &posto);
                }
            }else if(op == 3){ //cancella prenotazione
                passeggero vuoto={"","","",-1};
                passeggero p;
                int posto;
                printf("Inserisci numero posto (0 per finire): ");
                scanf("%d", &posto);

                while(posto != 0){
                    if(posto<1 || posto>150){
                        printf("Numero di posto errato \n");
                    }
                    else{
                        fseek(fp,(posto-1)*sizeof(passeggero),SEEK_SET);
                        fread(&p,sizeof(passeggero),1,fp);

                        if(p.bagagli!=-1){
                            fseek(fp,-sizeof(passeggero),SEEK_CUR);
                            fwrite(&vuoto,sizeof(passeggero),1,fp);
                            printf("Prenotazione cancellata con successo \n");
                        }
                        else{
                            printf("Posto non prenotato \n");
                        }
                    }
                    printf("Inserisci numero posto (0 per finire): ");
                    scanf("%d", &posto);
                }
            }else if(op == 4){ //lista passeggeri
                passeggero p;
                rewind(fp);

                printf("Lista passeggeri: \n");
                for(int i=0;i<150;i++){
                    fread(&p,sizeof(passeggero),1,fp);
                    if(p.bagagli!=-1){
                        printf("%d) %s %s %s bagagli: %d \n", i+1, p.cognome, p.nome, p.nazionalita, p.bagagli);
                    }
                }
            }else{
                printf("Opzione errata \n");
            }

            printf("Scegli un'opzione: \n");
            printf("1- prenota. \n");
            printf("2- verifica per posto. \n");
            printf("3- cancella prenotazione. \n");
            printf("4- stampa lista prenotazioni. \n");
            printf("5- esci. \n");
			scanf("%d",&op);
			getchar();
        }
    }
}