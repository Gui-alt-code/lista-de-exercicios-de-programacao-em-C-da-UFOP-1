//  Questão 17. Escreva um algoritmo utilizando a linguagem C que leia dois números inteiros e imprima o resultado da soma destes dois valores. Antes do resultado, deve ser impressa a seguinte mensagem SOMA.

// Algoritmo Descritivo:

// 1) Iniciar o programa.

// 2) Declarar uma variável do tipo inteiro chamada 'numerointeiroum' para armazenar o primeiro número.

// 3) Declarar uma variável do tipo inteiro chamada 'numerointeirodois' para armazenar o segundo número.

// 4) Declarar uma variável do tipo inteiro chamada 'soma' para armazenar o resultado da soma.

// 5) Exibir a mensagem: "Digite o seu primeiro valor:".

// 6) Ler o valor digitado pelo usuário e armazenar em 'numerointeiroum'.

// 7) Exibir a mensagem: "Digite o seu segundo valor:".

// 8) Ler o valor digitado pelo usuário e armazenar em 'numerointeirodois'.

// 9) Calcular a soma do soma dos dois números: soma = numerointeiroum + numerointeirodois.

// 10) Exibir a mensagem: "SOMA: [soma]".

// 11) Finalizar o programa.

#include <stdio.h>

int main(void) {

    int numerointeiroum;
    int numerointeirodois;
    int soma;

    printf("Digite o seu primeiro valor: ");
    scanf("%d", &numerointeiroum);

    printf("Digite o seu segundo valor: ");
    scanf("%d", &numerointeirodois);

    soma = numerointeiroum + numerointeirodois;

    printf("SOMA: %d", soma);

    return 0;
}