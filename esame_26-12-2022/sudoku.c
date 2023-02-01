#include <stdio.h>

int verificaRegione(int n, int a[][n], int i, int j){
    int r = i;
    int c = j;
    int count = 0;
    while (i < i+3){
        while (j < j+3){
            for (int k = r;k < k+3;k++){
                for (int x = c;x < x+3;x++){
                    if(a[i][j] == a[k][x]){
                        count++;
                        printf("SONO UGUALI\n");
                    }
                }
            }
            j++;
        }
        i++;
    }

    return count;
}

int main(int argc, char const *argv[])
{
    int dim = 9;
    int m[dim][dim];

    for (int i = 0; i < dim; i++){
        for (int j = 0; j < dim; j++){
            printf("inserisci il numero in posizione (%d,%d)",i+1,j+1);
            scanf("%d",&m[i][j]);
        }
    }

    for(int i=0;i<dim;i++){
        for(int j=0;j<dim;j++){
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }

    int r, c;
    printf("Inserisci le coordinate della regione che vuoi controllare (da 1 a 9): ");
    scanf("%d %d",r, c);
    r-=1;
    c-=1;
    
    int result = verificaRegione(dim, m, r, c);

    if(result == 9){
        printf("Regione corretta \n");
    }
    else{
        printf("Regione sbagliata \n");
    }
}
