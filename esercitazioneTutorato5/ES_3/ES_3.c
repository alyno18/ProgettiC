#include <stdio.h>
#define max 10
int main(int argc, char const *argv[])
{
    double a[max];
    int f[max]; //frequenze
    double media = 0;
    double somma = 0;

    for (int i = 0; i < max; i++)
    {
        printf("Inserisci valore %d: ",i);
        scanf("%g",a[i]);
        somma+=a[i];
        f[i]=0;
    }
    media = somma/max;
    printf("Ecco la media: %g   -----   ",media);

    for (int j = 0; j < max; j++)
    {
        for (int k = 0; k < max; k++)
        {
            if (a[j] == a[k]){
                f[j]++;
            }
        }
    }

    for (int l = 1; l < max; ++l)
    {
        if (f[0] < f[l]){
            f[0] = f[l];
        }
    }
}