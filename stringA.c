#include <stdio.h>  // Biblioteca para entrada e saída
#include <string.h> // Biblioteca para manipulação de strings

int main() {
    char str[100]; // Declara uma string de tamanho 100 para armazenar a entrada do usuário
    int count = 0; // Variável para contar a ocorrência da letra 'a'


    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin); // Lê a string com espaços e armazena em `str`

    for (int i = 0; i < strlen(str); i++) {
        // Verifica se o caractere atual é 'a' (minúscula) ou 'A' (maiúscula)
        if (str[i] == 'a' || str[i] == 'A') {
            count++; // Incrementa o contador se encontrar 'a' ou 'A'
        }
    }

    if (count > 0) {
        printf("A letra 'a' aparece %d vezes na string.\n", count);
    } else {
        printf("A letra 'a' não foi encontrada na string.\n");
    }

    return 0;
}
