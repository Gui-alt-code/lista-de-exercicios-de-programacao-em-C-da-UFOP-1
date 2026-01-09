// Questão 29. Criar um algoritmo utilizando a linguagem C que leia dois valores para as variáveis A e B, que efetue a troca dos valores de forma que a variável A passe a ter o valor da variável B e que a variável B passe a ter o valor da variável A. Apresente os valores trocados.

// Algoritmo Descritivo:

// 1) Iniciar o programa.

// 2) Declarar uma variável inteira chamada 'A' para armazenar o primeiro valor.

// 3) Declarar uma variável inteira chamada 'B' para armazenar o segundo valor.

// 4) Declarar uma variável inteira chamada 'troca' para armazenar temporariamente o valor de A durante a troca.

// 5) Exibir a mensagem: "Digite um valor para A:"

// 6) Ler o valor digitado pelo usuário e armazenar na variável 'A'.

// 7) Exibir a mensagem: "Digite um valor para B:"

// 8) Ler o valor digitado pelo usuário e armazenar na variável 'B'.

// 9) Armazenar o valor de 'A' na variável 'troca'.

// 10) Atribuir o valor de 'B' à variável 'A'.

// 11) Atribuir o valor de 'troca' à variável 'B'.

// 12) Exibir a mensagem: "Os valores trocados de A e B são, respectivamente: [A] e [B]"

// 13) Finalizar o programa.

#include <stdio.h>

int main(void) {

    int A;
    int B;
    int troca;

    printf("Digite um valor para A: ");
    scanf("%d", &A);

    printf("Digite um valor para B: ");
    scanf("%d", &B);

    troca = A;
    A = B;
    B = troca;

    printf("Os valores trocados de A e B são, respectivamente: %d e %d", A, B);

    return 0;
}