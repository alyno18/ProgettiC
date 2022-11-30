#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n1, n2;

    printf("Inserisci il primo numero: ");
    scanf("%d", &n1);

    printf("Inserisci il secondo numero: ");
    scanf("%d", &n2);

    if(n1%n2 == 0)
        printf("%d è multiplo di %d\n", n1, n2);
    else
        printf("%d non è multiplo di %d\n", n1, n2);
}