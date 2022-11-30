#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    double r = 0.0; //raggio
    double v = 0.0; //volume
    double s = 0.0; //superfice totale
    double pi = 3.14159;
    printf("Inserisci raggio\n");
    scanf("%lf",&r);
    v = (4.0/3.0)*pi*pow(r,3);
    s = 4*pi*pow(r,2);
    printf("Volume: %g, Superfice totale: %g\n",v,s);
}