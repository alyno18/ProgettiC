int main(int argc, char const *argv[])
{
    srand(time(0));
    int n=(rand()%100)+1;

    printf("Ho pensato un numero tra 1 e 100.\nProva ad indovinarlo.\nSe vuoi rinunciare inserisci 0.\n");

    int continua=1;
    int numTentativi=0;

    while(continua){
		int risposta;
		scanf("%d",&risposta);
		numTentativi++;

		if(risposta == 0){
			printf("Peccato! Il numero era: %d\n",n);
			continua=0;
		}else if(risposta==n){
			printf("Bravo!! Hai indovinato con %d tentativi\n",numTentativi);
			continua=0;
		}else if(risposta<n){
			printf("Il numero da indovinare è più alto\n");
		}else{
			printf("Il numero da indovinare è più basso\n");
		}
	}
}