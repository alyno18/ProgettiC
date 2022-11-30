#include <stdio.h>

struct pers{
    char* nome;
    char* cognome;
    struct pers * padre;
};

typedef struct pers persona;
typedef struct pers * personaPtr;

int main(int argc, char const *argv[])
{
    persona p1={"Mario", "Rossi", NULL};
	persona p2={"Luigi", "Rossi", NULL};

	p1.padre=&p2;

    printf("Nome: %s cognome: %s\n", p1.nome, p1.cognome);
	printf("Padre. Nome: %s cognome: %s\n", p1.padre->nome, p1.padre->cognome);
}
