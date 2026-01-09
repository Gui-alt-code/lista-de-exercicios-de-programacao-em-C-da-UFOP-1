// Questão 26. Criar um algoritmo utilizando a linguagem C que efetue o cálculo do salário líquido de um professor. Os dados fornecidos serão: valor da hora aula, número de aulas dadas no mês e percentual de desconto do INSS.

// Algoritmo Descritivo:

// 1) Iniciar o programa.

// 2) Declarar uma variável do tipo float chamada 'valorhoraaula' para armazenar o valor pago por hora de aula.

// 3) Declarar uma variável do tipo int chamada 'numerodeaulasdadas' para armazenar o número total de aulas ministradas no mês.

// 4) Declarar uma variável do tipo float chamada 'percentualdedesconto' para armazenar o percentual de desconto do INSS.

// 5) Declarar uma variável do tipo float chamada 'divisãodopercentual' para armazenar o valor do percentual convertido em número decimal (dividido por 100).

// 6) Declarar uma variável do tipo float chamada 'multiplicacao' para armazenar o valor do salário bruto, resultado da multiplicação entre 'valorhoraaula' e 'numerodeaulasdadas'.

// 7) Declarar uma variável do tipo float chamada 'desconto' para armazenar o valor a ser descontado do INSS.

// 8) Declarar uma variável do tipo float chamada 'salarioliquido' para armazenar o valor final do salário líquido do professor.

// 9) Exibir a mensagem: "Me informe o valor da hora aula:"

// 10) Ler o valor informado e armazenar em 'valorhoraaula'.

// 11) Exibir a mensagem: "Me informe o número de aulas dadas pelo professor neste mês:"

// 12) Ler o valor informado e armazenar em 'numerodeaulasdadas'.

// 13) Exibir a mensagem: "Me informe o percentual de desconto emitido pelo INSS:"

// 14) Ler o valor informado e armazenar em 'percentualdedesconto'.

// 15) Calcular o valor de 'divisãodopercentual' dividindo 'percentualdedesconto' por 100.

// 16) Calcular o valor de 'multiplicacao' multiplicando 'valorhoraaula' por 'numerodeaulasdadas'.

// 17) Calcular o valor de 'desconto' multiplicando 'multiplicacao' por 'divisãodopercentual'.

// 18) Calcular o valor de 'salarioliquido' subtraindo 'desconto' de 'multiplicacao'.

// 19) Exibir a mensagem final:
// "O salário líquido de um professor neste mês, onde o valor da hora aula foi [valorhoraaula], o número de aulas dadas no mês foi [numerodeaulasdadas] e o percentual de desconto do INSS foi igual a [percentualdedesconto] por cento, é [salarioliquido]."

// 20) Finalizar o programa.

#include <stdio.h>

int main(void) {

    float valorhoraaula;
    int numerodeaulasdadas;
    float percentualdedesconto;

    float divisãodopercentual;

    float multiplicacao;
    float subtracao;
    float desconto;
    float salarioliquido;

    printf("Me informe o valor da hora aula: ");
    scanf("%f", &valorhoraaula);

    printf("Me informe o número de aulas dadas pelo professor neste mês: ");
    scanf("%d", &numerodeaulasdadas);

    printf("Me informe o percentual de desconto emitido pelo INSS: ");
    scanf("%f", &percentualdedesconto);

    divisãodopercentual = percentualdedesconto / 100;

    multiplicacao = valorhoraaula * numerodeaulasdadas;

    desconto = multiplicacao * divisãodopercentual;

    salarioliquido = multiplicacao - desconto;

    printf("O salário líquido de um professor neste mês, onde o valor da hora aula foi %.2f, o número de aulas dadas no mês foi %d e o percentual de desconto do INSS foi igual %.2f por cento, é %.2f", valorhoraaula, numerodeaulasdadas, percentualdedesconto, salarioliquido);

    return 0;
}

