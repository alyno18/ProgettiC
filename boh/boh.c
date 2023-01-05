#include <stdio.h>
#define MAX 9

int main(int argc, char const *argv[])
{
    int m[MAX][MAX];

    for (int i = 0; i < MAX; i++){
        for (int j = 0; j < MAX; j++){
            printf("inserisci il numero in posizione (%d,%d)",i,j);
            scanf("%d",&m[i][j]);
        }
    }
    int rRegione, cRegione;
    printf("Inserisci le coordinate della regione che vuoi controllare: ");
    scanf("%d %d",rRegione, cRegione);
    rRegione-=1;
    cRegione-=1;
    
    int r = verificaRegione(MAX, m[][MAX], rRegione, rRegione);

    if(r > 9){
        printf("Regione sbagliata \n");
    }
    else{
        printf("Regione corretta \n")
    }
}


int verificaRegione(int n, m[][n], int i, int j){
    int c = 0;
    while (i < i+2){
        while (j < j+2){
            for (int k = 0; k < i+2; k++){
                for (int x = 0; x < j+2; x++){
                    if(m[i][j] == m[k][x]){
                        c++;
                    }
                }
            }
            j++;
        }
        i++;
    }

    return c;
}
