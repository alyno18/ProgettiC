#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    FILE * fp = NULL;
    fp=fopen("clienti.dat","ab");

    datiPasseggero passeggero={"","","",-1};
    for(int i = 0; i < 150; i++)
    {
        fwrite(&passeggero,sizeof(datiPasseggero),1,cfPtr);
    }
    fclose(fp);
}
