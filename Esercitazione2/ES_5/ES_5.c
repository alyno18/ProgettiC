#include <stdio.h>

int main(int argc, char const *argv[]){
    int r, uR, pSpazi;

    printf("Inseisci numero righe: ");
    scanf("%d",&r);
    
    uR = (r*2)-1;
    pSpazi = (uR/2)+1;

    for (int i = 0; i < r; i++){
        for (int k = 0; k < pSpazi; k++){
            printf(" ");
        }
        for (int j = 0; j < (1+(2*i)); j++){
            printf("*");
        }
        pSpazi=pSpazi-1;
        printf("\n");
    }
    
}