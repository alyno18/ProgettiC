int main(int argc, char const *argv[]){
    double q[32]={16674.6, 15886.9, 18527.4, 20589.0, 20916.3,
    21301.6, 21145.9, 20206.4, 20154.4, 20483.5, 20496.3, 20626.3, 20809.8,
    20594.4, 20292.9, 20769.5, 20082.7, 19331.5, 19571.2, 19204.8, 19162.6,
    19042.9, 19123.9, 19328.2, 19548.2, 19261.9, 19068.7, 19181.8, 19379.8,
    19154.8, 19059.1, 19134.6};

    int n = 0;
    double s = 0; //somma
    double m = 0; //media        


    printf("Inserisci il giorno: ");
    scanf("%d", &n);

    while (n>=0 && n<=31) {
    
        printf("Ecco la quotazione del giorno %d: %g\n",n,q[n]);

        for (int i = 0; i <= n; i++){
            s+=q[i];
        }

        m=s/n;
        printf("Ecco la media delle quotazioni fino al giorno %d: %g\n",n,m);
        printf("\n");

        printf("Inserisci il giorno: ");
        scanf("%d", &n);
    }
}