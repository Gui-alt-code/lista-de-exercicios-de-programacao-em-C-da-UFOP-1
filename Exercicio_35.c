//  Questão 35. Para vários tributos, a base de cálculo é o salário mínimo. Fazer um algoritmo utilizando a linguagem C que leia o valor do salário mínimo e o valor do salário de uma pessoa. Calcular e imprimir quantos salários mínimos essa pessoa ganha.

// Algoritmo Descritivo:

// 1) Iniciar o programa.

// 2) Declarar as variáveis reais: 'salariominimo', 'valordousuario' e 'quantidade'.

// 3) Exibir a mensagem: "Me informe o valor do salário mínimo atual:".

// 4) Ler o valor digitado pelo usuário e armazenar em 'salariominimo'.

// 5) Exibir a mensagem: "Me informe o valor de seu salário:".

// 6) Ler o valor digitado pelo usuário e armazenar em 'valordousuario'.

// 7) Calcular quantos salários mínimos a pessoa ganha:
//  - quantidade = valordousuario / salariominimo.

// 8) Exibir a mensagem: "Você ganha [quantidade] vezes o salário mínimo.".

// 9) Finalizar o programa.

#include <stdio.h> 

int main(void) {

    float salariominimo;
    float valordousuario;
    float maior;
    float menor;

    printf("Me informe o valor do salário mínimo atual: ");
    scanf("%f", &salariominimo);

    printf("Me informe o valor de seu salário: ");
    scanf("%f", &valordousuario);

    if(valordousuario < salariominimo) {
        menor = valordousuario / salariominimo;
        printf("Você ganha %.02f vezes um salário mínimo.", menor);
        return 0;
    } else {
        maior = valordousuario / salariominimo;
        printf("Você ganha %.02f vezes um salário mínimo.", maior);
    }
    return 0;
}