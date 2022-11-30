#include <stdio.h>;
#include <math.h>;
int main(int argc, char const *argv[])
{
    double a,b,c;
    double x = 0.0;

    printf("Inserisci i coefficienti a,b e c: ");
    scanf("%lf %lf %lf",&a,&b,&c);

    do{
        polinomio(a,b,c,x);
        x = x + 0.1;
    }while(x<3);
}

void polinomio(double a, double b, double c,double x){
    double pol;
    pol = (a*x*x)+(b*x)+c;
    printf("%g ", pol);
}