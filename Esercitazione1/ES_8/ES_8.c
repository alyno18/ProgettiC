#include <stdio.h>
#include <math.h>
#define MAX 13

int main(int argc, char const *argv[])
{
    int bc[MAX];   //array barcode
    int q;         //quoziente
    int r;         //resto
    int somp = 0;  //somma valori pari
    int somd = 0;  //somma valori dispari
    int som;       //somma dei pari(moltiplicati per 3) e dispari
    int k;
    int c;
    printf("Inserisci il barcode senza check digit: ");
    gets(bc);
    bc[1]=0;
    for(int i=1;i<MAX;i++){
        q=bc[i]/2;
        r=bc[i]-q*2;
        if(bc[i]==0)
            somp+=bc[i];
        else
            somd+=bc[i];
    }
    somp=somp*3;
    som=somp+somd;
    k = floor(som+10);
    c = k-som;
    printf("\n%d,%d",c,k);
}