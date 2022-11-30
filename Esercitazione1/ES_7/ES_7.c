#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int n1, n2, n3;
    
    printf("Inserisci tre cifre comprese tra 0 e 9: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    int num = n1*100 + n2*10 +n3;
    int arm = pow(n1,3) + pow(n2,3) + pow(n3,3);

    if(arm == num)
        printf("%d è un numero di armstong\n", num);
    else
        printf("%d non è un numero di armstong\n", num);
}