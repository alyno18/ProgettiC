#include <stdio.h>
int main(int argc, char const *argv[])
{
    int sec;
    printf("Inserisci numero intero da convertire: ");
    scanf("%d",&sec);
    
    int ore = sec/3600;
    int min = (sec % 3600)/60;
    int sec1 = (sec % 60);

    printf("%dh %dmin %dsec\n", ore, min, sec1);
}
