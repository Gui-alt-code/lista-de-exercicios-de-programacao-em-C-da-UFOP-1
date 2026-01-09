// Questão 15. Considere que o número de uma placa de veículo é composto por quatro algarismos. Construa um algoritmo utilizando a linguagem  C que leia este número e apresente o algarismo correspondente à casa das centenas.

// Algoritmo Descritivo:

// 1) Iniciar o programa.

// 2) Declarar uma variável do tipo inteiro chamada 'placadoveiculo' para armazenar o número da placa.

// 3) Declarar uma variável do tipo inteiro chamada 'obtendooalgarismonacasadascentenas' para armazenar o algarismo da casa das centenas.

// 4) Exibir a mensagem: "Digite o número da placa de seu veículo:"

// 5) Ler o valor digitado pelo usuário e armazenar em 'placadoveiculo'.

// 6) Verificar se 'placadoveiculo' é menor que 1000.
//  - Se sim, exibir a mensagem: "A placa do veículo deve conter 4 algarismos, não menos. Teste o código novamente com outro valor."
//  - Encerrar o programa.

// 7) Verificar se 'placadoveiculo' é maior ou igual a 10000.
//  - Se sim, exibir a mensagem: "A placa do veículo deve conter 4 algarismos, não mais. Teste o código novamente com outro valor."
//  - Encerrar o programa.

// 8) Calcular o algarismo da casa das centenas usando a expressão:
// 'obtendooalgarismonacasadascentenas' = (placadoveiculo / 100) % 10.

// 9) Exibir a mensagem:
//  "O algarismo correspondente à casa das centenas da placa [placadoveiculo] é igual a: [obtendooalgarismonacasadascentenas]".
//  Use o formato %04d para garantir que a placa seja mostrada com 4 dígitos, adicionando zeros à esquerda se necessário.

// 10) Finalizar o programa.

#include <stdio.h>

int main(void) {

    int placadoveiculo;
    int obtendooalgarismodacasadascentenas;

    printf("Me informe o número da placa de seu veículo: ");
    scanf("%d", &placadoveiculo);

    if (placadoveiculo < 1000){
        printf("A placa do véiculo deve conter 4 algarismos, não menos. Teste o código novamente com outro valor.");
        return 0;
    }

    if(placadoveiculo >= 10000) {
        printf("A placa do veículo deve conter 4 algarismos, não mais. Teste o código novamente com outro valor.");
        return 0;
    }
    
    obtendooalgarismodacasadascentenas = (placadoveiculo / 100) % 10;
    printf("O algarismo correspondente à casa das centenas da placa %d é %d.", placadoveiculo, obtendooalgarismodacasadascentenas);

    return 0;
}
