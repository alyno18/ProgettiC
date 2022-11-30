#include <stdio.h>

int main(int argc, char const *argv[]){
    int a;
     
    printf("Inserire il numero in analisi: ");
    scanf("%d",&a);
     
    int primo = 0;
     
    for(int i = 2; i < a; i++){
        if(a % i == 0)
            primo = 1;
    }
     
    if(primo == 0)
        printf("Il numero e' primo\n");
    else
        printf("Il numero non e' primo\n");   
     
}