// Questão 11. Considere que o número de uma placa de veículo é composto por quatro algarismos. Construa um algoritmo utilizando a linguagem C que leia este número e apresente o algarismo correspondente à casa das unidades.

// Algoritmo Descritivo:

// 1) Iniciar o programa.

// 2) Declarar uma variável do tipo inteiro chamada 'placadoveiculo' para armazenar o número da placa.

// 3) Declarar uma variável do tipo inteiro chamada 'algarismodacasadasunidades' para armazenar o último algarismo da placa.

// 4) Exibir a mensagem: "Digite os número da placa de seu carro:"

// 5) Ler o valor digitado pelo usuário e armazenar em 'placadoveiculo'.

// 6) Verificar se 'placadoveiculo' é menor que 1000.
//  - Se sim, exibir mensagem: "A placa do veículo deve conter 4 algarismos, não menos. Teste o código novamente com outro valor." 
//  - Encerrar o programa.

// 7) Verificar se 'placadoveiculo' é maior ou igual a 10000.
//  - Se sim, exibir mensagem: "A placa do veículo deve conter 4 algarismos, não mais. Teste o código novamente com outro valor."
//  - Encerrar o programa.

// 8) Calcular o último algarismo da placa usando a operação módulo (%): 
//  'algarismodacasadasunidades' = 'placadoveiculo' % 10.

// 9) Exibir a mensagem: 
//  "O último algarismo referente à casa de unidades da placa [placadoveiculo] é [algarismodacasadasunidades]".
//  Use o formato %04d para garantir que a placa seja mostrada com 4 dígitos, adicionando zeros à esquerda se necessário.

// 10) Finalizar o programa.

#include <stdio.h>

int main(void) {

    int placadoveiculo;
    int algarismodacasadasunidades;

    printf("Digite os número da placa de seu carro: \n");
    scanf("%d", &placadoveiculo);

    if(placadoveiculo < 1000) {
        printf("A placa do veículo, deve conter 4 algarismos, não menos. Teste o código novamente com outro valor.");
        return 0;
    } 

    if(placadoveiculo >= 10000) {
        printf("A placa do veículo, deve conter 4 algarismos, não mais. Teste o código novamente com outro valor.");
        return 0;
    }

    // Qualquer número dividido por 10 tem como resto o último algarismo
    algarismodacasadasunidades = placadoveiculo % 10;

    // No printf usei %04d para mostrar a placa sempre com 4 dígitos (com zeros à esquerda, se necessário). Haja vista que o scanf, não reconhece números que começam com 0, os excluindo no caso.
    printf("O último algarismo referente à casa de unidades da placa %04d é %d", placadoveiculo, algarismodacasadasunidades);

    return 0;
}