// Questão 1. Elaborar um programa que efetue a leitura de um número inteiro e apresentar uma mensagem informando se o número é par ou ímpar.

// Algoritmo Descritivo:

// 1) Iniciar o programa.

// 2) Solicitar ao usuário que digite um número inteiro.

// 3) Ler o número digitado e armazenar na váriavel numerointeiro.

// 4)  Calcular o resto da divisão do número por 2 (usando numerointeiro % 2) e armazenar o resultado na variável inteira numeroehpar.

// 5) Verificar se o valor de numeroehpar é igual a 0:

// * Caso seja, o número é par.
// * Caso não seja, o número é ímpar.

// 6) Exibir o valor digitado pelo usuário e, paralelamente, informá-lo se o número é par ou ímpar.

// 7) Finalizar o programa.

#include <stdio.h>

int main(void) {

    int numerointeiro;

    printf("Digite um número inteiro: ");
    scanf("%d",&numerointeiro);

    int numeroehpar = numerointeiro % 2;

    if(numeroehpar == 0) {
        printf("O número %d é par", numerointeiro);
    } else {
        printf("O número %d é impar", numerointeiro);
    }

    return 0;
}
