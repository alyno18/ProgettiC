#include <stdio.h>

int main(int argc, char const *argv[]){
    float c = 0.0; //capitale

    printf("Inserisci capitale: ");
    scanf("%f",&c);

    float c1 = c;
    float c2 = c;
    float c3 = c;
    float c4 = c;
    float c5 = c;

    printf("Ammontare (tasso 1): \n");
    for (int i = 1; i <= 10; i++){
        c1 = c1+c1*0.01;
        printf("%d  %0.2f\n",i,c1);
    }

    printf("Ammontare (tasso 2): \n");
    for (int i = 1; i <= 10; i++){
        c2 = c2+c2*0.02;
        printf("%d  %0.2f\n",i,c2);
    }

    printf("Ammontare (tasso 3): \n");
    for (int i = 1; i <= 10; i++){
        c3 = c3+c3*0.03;
        printf("%d  %0.2f\n",i,c3);
    }

    printf("Ammontare (tasso 4): \n");
    for (int i = 1; i <= 10; i++){
        c4 = c4+c4*0.04;
        printf("%d  %0.2f\n",i,c4);
    }

    printf("Ammontare (tasso 5): \n");
    for (int i = 1; i <= 10; i++){
        c5 = c5+c5*0.05;
        printf("%d  %0.2f\n",i,c5);
    }
}