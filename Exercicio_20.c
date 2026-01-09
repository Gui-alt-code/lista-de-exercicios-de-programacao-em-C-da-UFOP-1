//  Questão 20. Escreva um algoritmo utilizando a linguagem C que leia dois números reais e imprima a média aritmética entre esses dois valores com  a seguinte mensagem MEDIA antes do resultado.

// Algoritmo Descritivo:

// 1) Iniciar o programa.

// 2) Declarar uma variável do tipo real (float) chamada 'valorrealum' para armazenar o primeiro número.

// 3) Declarar uma variável do tipo real (float) chamada 'valorrealdois' para armazenar o segundo número.

// 4) Declarar uma variável do tipo real (float) chamada 'mediadosvalores' para armazenar a média dos dois números.

// 5) Exibir a mensagem: "Digite um número real:".

// 6) Ler o valor digitado pelo usuário e armazenar em 'valorrealum'.

// 7) Exibir a mensagem: "Digite outro número real:".

// 8) Ler o valor digitado pelo usuário e armazenar em 'valorrealdois'.

// 9) Calcular a média dos dois números usando a expressão:
//  'mediadosvalores' = (valorrealum + valorrealdois) / 2.0.

// 10) Exibir a mensagem: "MEDIA: [mediadosvalores]", mostrando o resultado formatado com duas casas decimais.

// 11) Finalizar o programa.

#include <stdio.h>

int main(void) {

    float valorrealum;
    float valorrealdois;
    float mediadosvalores;

    printf("Digite um número real: ");
    scanf("%f", &valorrealum);

    printf("Digite outro número real: ");
    scanf("%f", &valorrealdois);

    mediadosvalores = (valorrealum + valorrealdois) / 2.0;
    printf("MEDIA: %.2f", mediadosvalores);

    return 0;
}
