// Questão 28. Criar um algoritmo utilizando a linguagem C para calcular e apresentar o valor do volume de uma lata de óleo, utilizando a fórmula:

// V = 3.14159 × R elevado a 2 x h

// onde V é o volume, R é o raio e h é a altura.

// Algoritmo Descritivo:

// 1) Iniciar o programa.

// 2) Declarar uma variável do tipo float chamada 'raio' para armazenar o valor do raio da lata de óleo.

// 3) Declarar uma variável do tipo float chamada 'altura' para armazenar o valor da altura da lata de óleo.

// 4) Declarar uma constante float chamada 'pi' e atribuir o valor 3.14159.

// 5) Declarar uma variável do tipo float chamada 'raioAoQuadrado' para armazenar o valor do raio elevado ao quadrado.

// 6) Declarar uma variável do tipo float chamada 'volume' para armazenar o resultado do cálculo do volume da lata.

// 7) Exibir a mensagem: "Me informe o valor do raio (R) da lata de óleo:"

// 8) Ler o valor digitado pelo usuário e armazenar na variável 'raio'.

// 9) Exibir a mensagem: "Me informe a altura (h) da lata de óleo:"

// 10) Ler o valor digitado pelo usuário e armazenar na variável 'altura'.

// 11) Calcular o valor do raio elevado ao quadrado:
// raioAoQuadrado = pow(raio, 2)

// 12) Calcular o volume da lata usando a fórmula:
// volume = pi * raioAoQuadrado * altura

// 13) Exibir a mensagem com o resultado:
// "O volume (V) da lata de óleo de raio (R) [raio] e altura (h) [altura] é igual a [volume]"

// 14) Finalizar o programa.

#include <stdio.h>
#include <math.h>

int main(void) {

    float raio;
    float altura;
    float pi = 3.14159;

    float raioelevadoadois;

    float calculo;

    printf("Me informe o valor do raio (R) da lata de óleo: ");
    scanf("%f", &raio);

    printf("Me informe a altura (h) da lata de óleo: ");
    scanf("%f", &altura);

    raioelevadoadois = pow(raio, 2);

    calculo = pi * raioelevadoadois * altura;

    printf("O volume (V) da lata de óleo de raio (R) %.2f e altura (h) %.2f é igual: %.2f", raio, altura, calculo);

    return 0;
}