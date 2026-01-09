//  Questão 37. Antes de o racionamento de energia ser decretado, quase ninguém falava em quilowatts; mas, agora, todos incorporaram essa palavra em seu vocabulário. Sabendo-se que 100 quilowatts de energia custa um sétimo do salário mínimo, fazer um algoritmo utilizando a linguagem C que receba o valor do salário mínimo e a quantidade de quilowatts gasta por uma residência e calcule (imprima).

// 1. o valor em reais de cada quilowatt;

// 2. o valor em reais a ser pago;

// 3. o novo valor a ser pago por essa residência com um desconto de 10%

// Algoritmo Descritivo:

// 1) Iniciar o programa.

// 2) Declarar as variáveis reais: 
//    'salariominimo', 'quilowatts', 'setimodosalario', 
//    'valordecadaquilowatt', 'valorpago' e 'novovalor'.

// 3) Exibir a mensagem: "Me informe o valor do salário mínimo:".

// 4) Ler o valor digitado pelo usuário e armazenar em 'salariominimo'.

// 5) Exibir a mensagem: "Me informe a quantidade de quilowatts gasta na residência:".

// 6) Ler o valor digitado pelo usuário e armazenar em 'quilowatts'.

// 7) Calcular o valor correspondente a um sétimo do salário mínimo:
//  - setimodosalario = salariominimo / 7.

// 8) Calcular o valor em reais de cada quilowatt:
//  - valordecadaquilowatt = setimodosalario / 100.

// 9) Calcular o valor total a ser pago pela residência:
//  - valorpago = valordecadaquilowatt * quilowatts.

// 10) Calcular o novo valor com 10% de desconto:
//  - novovalor = valorpago * 0.9.

// 11) Exibir as mensagens:
//  - "O valor em reais de cada quilowatt da residência é: [valordecadaquilowatt]."
//  - "O valor a ser pago é: [valorpago]."
//  - "O novo valor com desconto de 10% é: [novovalor]."

// 12) Finalizar o programa.

#include <stdio.h>

int main(void) {

    float salariominimo;
    float quilowatts;

    float setimodosalario;
    float valordecadaquilowatt;
    float valorpago;
    float novovalor;

    printf("Me informe o valor do salário mínimo: ");
    scanf("%f", &salariominimo);

    printf("Me informe a quantidade de quilowatts gasta na residência: ");
    scanf("%f", &quilowatts);

    setimodosalario = salariominimo / 7;

    valordecadaquilowatt = setimodosalario / 100;

    valorpago = valordecadaquilowatt * quilowatts;

    novovalor = valorpago * 0.9;

    printf("O valor em reais de cada quilowatt da residência é igual: %.02f. Ademais, o valor a ser pago é equivalente a %.02f real(is). Por fim, o novo valor a ser pago pela residência será de %.02f real(is).", valordecadaquilowatt, valorpago, novovalor);

    return 0;
}