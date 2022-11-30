#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;

    printf("Inserisci un numero: ");
    scanf("%d",&n);
    if(n%5==0 && n>=80 && n<=210)
        printf("1\n");
    else
        printf("0\n");
}