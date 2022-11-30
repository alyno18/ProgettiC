#include <stdio.h>

int main(int argc, char const *argv[]){
    float c = 0.0; //capitale

    printf("Inserisci capitale: ");
    scanf("%f",&c);

    for (int i = 1; i <= 5; i++){
        c = c+c*0.05;
        printf("%d  %0.2f\n",i,c);
    }
}