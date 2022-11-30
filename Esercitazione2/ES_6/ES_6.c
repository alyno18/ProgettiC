#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]){
    int c;
    int r;

    printf("Insrisci colonne e righe: ");
    scanf("%d %d",&c,&r);

    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            if(i%2 == 0){
                if(j%2 == 0)
                    printf("*");
                else
                    printf(" ");
            }
            else{
                if(j%2 == 0)
                    printf(" ");
                else
                    printf("*");
            }
        }
        printf("\n");
    }
    
}