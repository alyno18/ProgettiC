#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    double x1, y1, x2, y2;
    printf("inserisci le prime due cordinate\n");
    scanf("%lf %lf", &x1,&y1);
    printf("inserisci le altre due cordinate\n");
    scanf("%lf %lf", &x2,&y2);

    double m = (y2-y1)/(x2-x1);
    double q = ((y1*x2)-(y2*x1))/(x2-x1);

    printf("Coefficiente angolare: %g\n",m);
    printf("Termine noto: %g\n", q);
}
