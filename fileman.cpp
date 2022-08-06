//Read, select and past program
#include <stdio.h>
#include <string.h>

int main() {
    FILE *arq, *arqf;
    char Linha[100];
    char *result;
    char *energy, *momentum, *polarity, *shift, *Jconstant;
    int i;

    arq = fopen("/home/florincy/Documentos/Simone.txt", "r");
    arqf = fopen("/home/florincy/Documentos/Output.txt", "a");

    if (!arq) {
        printf("Problemas na CRIACAO do arquivo\n");
        return 0;
    }
    if (!arqf) {
        printf("Problemas na CRIACAO do arquivo\n");
        return 0;
    }
    i = 1;
    while (!feof(arq)) {
        // Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq); // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result) {
            energy = strstr(result, "Energy");
            momentum = strstr(result, "Momentum");
            polarity = strstr(result, "Shift");
            Jconstant = strstr(result, "Jconstant");

            if (energy) {
                printf("Linha %d : %s", i, Linha);
                fprintf(arqf, "%s", Linha);
            }
            if (momentum) {
                printf("Linha %d : %s", i, Linha);
                fprintf(arqf, "%s", Linha);
            }
            if (polarity) {
                printf("Linha %d : %s", i, Linha);
                fprintf(arqf, "%s", Linha);
            }
            if (Jconstant) {
                printf("Linha %d : %s", i, Linha);
                fprintf(arqf, "%s", Linha);
            }
            i++;
            //Se foi possível ler
            //  printf("Linha %d : %s", i, Linha);
        }
    }
}
