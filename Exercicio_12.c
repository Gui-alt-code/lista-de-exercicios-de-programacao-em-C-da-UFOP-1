// Questão 12. Considere que o número de uma placa de veículo é composto por quatro algarismos. Construa um algoritmo utilizando a linguagem C que leia este número e apresente o algarismo correspondente à casa das dezenas.

// Algoritmo Descritivo:

// 1) Iniciar o programa.

// 2) Declarar uma variável do tipo inteiro chamada 'placadoveiculo' para armazenar o número da placa.

// 3) Declarar uma variável do tipo inteiro chamada 'obtendoovalornacasadasdezenas' para armazenar o algarismo da casa das dezenas.

// 4) Exibir a mensagem: "Digite o número da placa de seu veículo:"

// 5) Ler o valor digitado pelo usuário e armazenar em 'placadoveiculo'.

// 6) Verificar se 'placadoveiculo' é menor que 1000.
//  - Se sim, exibir a mensagem: "A placa do veículo, deve conter 4 algarismos, não menos. Teste o código novamente com outro valor."
//  - Encerrar o programa.

// 7) Verificar se 'placadoveiculo' é maior ou igual a 10000.
//  - Se sim, exibir a mensagem: "A placa do veículo, deve conter 4 algarismos, não mais. Teste o código novamente com outro valor."
//  - Encerrar o programa.

// 8) Calcular o algarismo da casa das dezenas usando a expressão:
//  'obtendoovalornacasadasdezenas' = (placadoveiculo / 10) % 10.

// 9) Exibir a mensagem:
//  "O algarismo referente à casa das dezenas presente na placa [placadoveiculo] é [obtendoovalornacasadasdezenas]".
//  Use o formato %04d para garantir que a placa seja mostrada com 4 dígitos, adicionando zeros à esquerda se necessário.

// 10) Finalizar o programa.

#include <stdio.h>

int main(void) {

    int placadoveiculo;
    int obtendoovalornacasadasdezenas;

    printf("Digite o número da placa de seu veículo: \n");
    scanf("%d", &placadoveiculo);

    if(placadoveiculo < 1000) {
        printf("A placa do veículo, deve conter 4 algarismos, não menos. Teste o código novamente com outro valor.");
        return 0;
    }

    if(placadoveiculo >= 10000) {
        printf("A placa do véiculo, deve conter 4 algarismos, não mais. Teste o código novamente com outro valor.");
        return 0;
    }

    // ✅ Correção necessária

    // Para obter somente o algarismo da casa das dezenas, a expressão correta é:

    // obtendoovalornacasadasdezenas = (placadoveiculo / 10) % 10;
    
    // 🧠 Explicação da lógica
    // Exemplo: placadoveiculo = 4567

    // 4567 / 10 = 456 → Remove a unidade.

    // 456 % 10 = 6 → O último dígito agora é a casa das dezenas.

    obtendoovalornacasadasdezenas = (placadoveiculo / 10) % 10;
    printf("O algarismo referente à casa das dezenas presente na placa %04d é %d", placadoveiculo, obtendoovalornacasadasdezenas);

    return 0;
}