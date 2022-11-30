#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a,b;

    printf("Inserisci due numeri positivi e > 2: ");
    scanf("%d %d",&a,&b);
    
    if(a%2==1) // se dispari
		a=a+1; // partiamo dal pari successivo

	for(int n=a;n<=b;n+=2){ // considero tutti i pari tra a e b
		// consideriamo tutte le coppie di interi minori di n (e maggiori di 1)
		// ognuna di esse è candidata ad essere una coppia di Goldbach
		int j=2;
		int trovato=0;
		while(j<=n-2 && !trovato){
			int k=n-j; // j e k sono la coppia corrente (j+k=n)
			if(primo(j) && primo(k)){ // se j e k sono primi abbiamo trovato la coppia di Goldbach
				printf("%d=%d+%d\n",n,j,k);
				trovato=1;
			}
			j++;
		}
    }
}

int primo(int n){
    int primo=1;
	if(n<2){ // se n è minore di 2 allora non è primo
		primo=0;
	}else{ // se n e >= 2
		for(int i=2;i<=sqrt(n);i++){ // considero tutti i potenziali divisori
			if(n%i==0){ // se i divide n...
				primo=0; // ...n non è primo
            }
		}
	}

	return primo;
}