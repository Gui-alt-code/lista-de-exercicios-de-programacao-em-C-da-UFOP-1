// Questão 31. Todo restaurante, embora por lei não possa obrigar o cliente a pagar, cobra 10% de comissão para o garçom. Crie um algoritmo utilizando a linguagem C que leia o valor gasto com despesas realizadas em um restaurante e imprima o valor da gorjeta e o valor total com a gorjeta.

// Algoritmo Descritivo:

// 1) Iniciar o programa.

// 2) Declarar uma variável do tipo real chamada 'despesas' para armazenar o valor gasto no restaurante.

// 3) Declarar uma variável do tipo real chamada 'gorjeta' para armazenar o valor da gorjeta do garçom.

// 4) Declarar uma variável do tipo real chamada 'total' para armazenar o valor total com a gorjeta.

// 5) Exibir a mensagem: "Digite o valor gasto no restaurante:"

// 6) Ler o valor digitado pelo usuário e armazenar na variável 'despesas'.

// 7) Calcular a gorjeta como 10% do valor das despesas e armazenar na variável 'gorjeta'.

// 8) Calcular o total somando as despesas com a gorjeta e armazenar na variável 'total'.

// 9) Exibir a mensagem: "O valor da gorjeta do garçom será de [gorjeta], e o valor total com a gorjeta será de [total]".

// 10) Finalizar o programa.

#include <stdio.h>

int main(void) {

    float despesas;
    float gorjeta;
    float total;

    printf("Digite o valor gasto no restaurante: ");
    scanf("%f", &despesas);

    gorjeta = despesas * 0.10;

    total = despesas + gorjeta;

    printf("O valor da gorjeta do garçom será de %.2f, paralelamente, o valor total com a gorjeta será de %.2f", gorjeta, total);

    return 0;
}