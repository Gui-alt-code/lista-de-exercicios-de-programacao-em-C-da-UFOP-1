//  Questão 14. Considere que o número de uma placa de veículo é composto por quatro algarismos. Construa um algoritmo utilizando a linguagem  C que leia este número e apresente o algarismo correspondente à casa das unidades de milhar.

// Algoritmo Descritivo:

// 1) Iniciar o programa.

// 2) Declarar uma variável do tipo inteiro chamada 'numerodaplacadoveiculo' para armazenar o número da placa.

// 3) Declarar uma variável do tipo inteiro chamada 'obtendooalgarismonacasadasunidadesdemilhar' para armazenar o algarismo da casa das unidades de milhar.

// 4) Exibir a mensagem: "Digite o valor da placa de seu veículo:"

// 5) Ler o valor digitado pelo usuário e armazenar em 'numerodaplacadoveiculo'.

// 6) Verificar se 'numerodaplacadoveiculo' é menor que 1000.
//  - Se sim, exibir a mensagem: "A placa do veículo deve conter 4 algarismos, não menos. Teste o código novamente com outro valor."
//  - Encerrar o programa.

// 7) Verificar se 'numerodaplacadoveiculo' é maior ou igual a 10000.
//  - Se sim, exibir a mensagem: "A placa do veículo deve conter 4 algarismos, não mais. Teste o código novamente com outro valor."
//  - Encerrar o programa.

// 8) Calcular o algarismo da casa das unidades de milhar usando a expressão:
//    'obtendooalgarismonacasadasunidadesdemilhar' = numerodaplacadoveiculo / 1000.

// 9) Exibir a mensagem:
//  "O algarismo correspondente à casa das unidades de milhar da placa [numerodaplacadoveiculo] é igual a: [obtendooalgarismonacasadasunidadesdemilhar]".
//   Use o formato %04d para garantir que a placa seja mostrada com 4 dígitos, adicionando zeros à esquerda se necessário.

// 10) Finalizar o programa.

#include <stdio.h>

int main(void) {

    int numerodaplacadoveiculo;
    int obtendooalgarismonacasadasunidadesdemilhar;

    printf("Digite o valor da placa de seu veículo: ");
    scanf("%d", &numerodaplacadoveiculo);

    if(numerodaplacadoveiculo < 1000) {
        printf("A placa do veículo deve conter 4 algarismos, não menos. Teste o código novamente com outro valor.");
        return 0;
    }
 
    if(numerodaplacadoveiculo >= 10000) {
        printf("A placa do véiculo deve conter 4 algarismos, não mais. Teste o código novamente com outro valor.");
        return 0;
    }

    obtendooalgarismonacasadasunidadesdemilhar = numerodaplacadoveiculo / 1000;
    printf("O algarismo correspondente à casa das unidades de milhar da placa %04d é igual a: %d", numerodaplacadoveiculo, obtendooalgarismonacasadasunidadesdemilhar);

    return 0;
}

