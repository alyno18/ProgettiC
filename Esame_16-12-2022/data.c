#include <stdio.h>

typedef struct{
    int giorno;
    int mese,
    int anno;
} data;


int main(int argc, char const *argv[])
{
    data d1;
    data d2;

    printf("Inserisci giorno mese e anno (0 0 0 per finire) \n");
    scanf("%d %d %d", &d1.giorno, &d1.mese, &d1.anno);


    while(d1.giorno!=0 && d1.mese!=0 && d1.anno!=0){
        printf("Inserisci giorno mese e anno (0 0 0 per finire) \n");
        scanf("%d %d %d", &d2.giorno, &d2.mese, &d2.anno);
        
        if(d1.giorno != 0 && d1.mese != 0 && d1.anno != 0){
            if(d1.anno < d2.anno || (d1.anno == d2.anno && d1.mese < d2.mese) || (d1.anno == d2.anno && d1.mese == d2.mese && d1.giorno < d2.giorno)){
            // d1 precede d2
            somma+=giorniTrascorsi(d1,d2);
            }else{
                // d2 precede d1
                somma+=giorniTrascorsi(d2,d1);
            }
        }
    }
}

int giorniTrascorsi(data d1, data d2){
    
}