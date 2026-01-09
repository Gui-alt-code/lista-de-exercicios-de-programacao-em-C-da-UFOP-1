//  Questão 36. Criar um algoritmo utilizando a linguagem C que efetue o cálculo da quantidade de litros de combustível gastos em uma viagem, sabendo-se que o carro faz 12 km com um litro. Deverão ser fornecidos o tempo gasto na viagem e a velocidade média.

//  Dist = Temp x Vel

//  Lit = Dist / 12

//  O algoritmo deverá apresentar os valores da Distância percorrida e a quantidade de Litros utilizados na viagem.

// Algoritmo Descritivo:

// 1) Iniciar o programa.

// 2) Declarar as variáveis reais: 'tempo', 'velocidademedia', 'distancia' e 'litros'.

// 3) Exibir a mensagem: "Me informe o tempo gasto (em horas) na viagem:".

// 4) Ler o valor digitado pelo usuário e armazenar em 'tempo'.

// 5) Exibir a mensagem: "Me informe a velocidade média que você (ou seu veículo) se deslocou durante a viagem:".

// 6) Ler o valor digitado pelo usuário e armazenar em 'velocidademedia'.

// 7) Calcular a distância percorrida na viagem:
//    - distancia = tempo * velocidademedia.

// 8) Calcular a quantidade de litros de combustível gastos:
//  - litros = distancia / 12.

// 9) Exibir a mensagem: "A distância percorrida na sua viagem foi de [distancia] quilômetros, paralelamente, foram gastos [litros] litro(s) de combustível.".

// 10) Finalizar o programa.

#include <stdio.h>

int main(void) {

    float tempo;
    float velocidademedia;
    float distancia;
    float litros;

    printf("Me informe o tempo gasto (em horas) na viagem: ");
    scanf("%f", &tempo);

    printf("Me informe a velocidade média que você (ou seu veículo) se deslocou durante a viagem: ");
    scanf("%f", &velocidademedia);

    distancia = tempo * velocidademedia;

    litros = distancia / 12;

    printf("A distância percorrida na sua viagem foi de %.02f quilômetros, paralelamente, foram gastos %.02f litro(s) de combustível", distancia, litros);

    return 0;
}