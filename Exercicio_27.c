// Questão 27. Escreva um algoritmo utilizando a linguagem C que leia uma temperatura em gruas centígrados e apresente a temperatura convertida em graus Fahrenheit. A fórmula de conversão é:

// F = 9 * C + 160 / 5

// Algoritmo Descritivo:

// 1) Iniciar o programa.

// 2) Declarar uma variável do tipo float chamada 'grauscentigrados' para armazenar a temperatura em graus Celsius.

// 3) Declarar uma variável do tipo float chamada 'grausfahrenheit' para armazenar a temperatura convertida em graus Fahrenheit.

// 4) Exibir a mensagem: "Me informe a temperatura em graus centígrados (C) que deseja converter para graus Fahrenheit (F):"

// 5) Ler o valor digitado pelo usuário e armazenar na variável 'grauscentigrados'.

// 6) Calcular a temperatura em Fahrenheit utilizando a fórmula:
// grausfahrenheit = (9 * grauscentigrados + 160) / 5

// 7) Armazenar o resultado na variável 'grausfahrenheit'.

// 8) Exibir a mensagem com o resultado da conversão:
// "A temperatura em graus centígrados (C) [grauscentigrados], convertida para graus Fahrenheit (F), é igual [grausfahrenheit]."

// 9) Finalizar o programa.

#include <stdio.h>

int main(void) {

    float grauscentigrados;

    float grausfahrenheit;

    printf("Me informe a temperatura em graus centígrados (C) que deseja converter para graus Fahrenheit (F): ");
    scanf("%f", &grauscentigrados);

    grausfahrenheit = (9 * grauscentigrados + 160) / 5;

    printf("A temperatura em graus centígrados (C) %.2f, convertida para graus Fahrenheit (F), é igual %.2f", grauscentigrados, grausfahrenheit);

    return 0;
}