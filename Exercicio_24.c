//  Questão 24. O produto de uma série de termos de uma Progressão Geométrica (P.G.) pode ser calculado pela fórmula abaixo:

// P = a1 (elevado a n) x q (elevado a n x (n - 1) / 2)

//  Agora, escreva um algoritmo utilizando a linguagem C para determinar o produto dos n primeiros termos de uma P.G.

// Algoritmo Descritivo:

// 1) Iniciar o programa.

// 2) Declarar uma variável do tipo double chamada 'primeirotermo' para armazenar o valor do primeiro termo (a1) da P.G.

// 3) Declarar uma variável do tipo inteiro chamada 'numerodetermos' para armazenar o número de termos (n) da P.G.

// 4) Declarar uma variável do tipo double chamada 'razao' para armazenar a razão (q) da P.G.

// 5) Declarar uma variável do tipo double chamada 'primeirotermoelevadoan' para armazenar o valor de a1 elevado a n.

// 6) Declarar uma variável do tipo double chamada 'contadonumerodetermos' para armazenar o valor de n*(n-1)/2.

// 7) Declarar uma variável do tipo double chamada 'razaoelevadaan' para armazenar o valor de q elevado a n*(n-1)/2.

// 8) Declarar uma variável do tipo double chamada 'resultado' para armazenar o produto final da P.G.

// 9) Exibir a mensagem: "Me informe o valor do primeiro termo (a1) de sua P.G:"

// 10) Ler o valor digitado pelo usuário e armazenar na variável 'primeirotermo'.

// 11) Exibir a mensagem: "Me informe o número de termos (n) de sua P.G:"

// 12) Ler o valor digitado pelo usuário e armazenar na variável 'numerodetermos'.

// 13) Exibir a mensagem: "Me informe a razão (q) de sua P.G:"

// 14) Ler o valor digitado pelo usuário e armazenar na variável 'razao'.

// 15) Calcular 'primeirotermoelevadoan' utilizando a fórmula:
//   primeirotermoelevadoan = pow(primeirotermo, numerodetermos)

// 16) Calcular 'contadonumerodetermos' utilizando a fórmula:
//   contadonumerodetermos = numerodetermos * (numerodetermos - 1) / 2.0

// 17) Calcular 'razaoelevadaan' utilizando a fórmula:
//   razaoelevadaan = pow(razao, contadonumerodetermos)

// 18) Calcular o produto final 'resultado' utilizando a fórmula:
//   resultado = primeirotermoelevadoan * razaoelevadaan

// 19) Exibir a mensagem com o resultado:
//     "O produto (P) de sua P.G de primeiro termo (a1) [primeirotermo], número de termos (n) [numerodetermos] e razão (q) [razao] é igual a [resultado]"

// 20) Finalizar o programa.

#include <stdio.h>
#include <math.h>

int main(void) {

    double primeirotermo; // a1
    int numerodetermos; // n -> deve ser um número inteiro
    double razao; // q

    double primeirotermoelevadoan; // a1 (elevado a n)
    double contadonumerodetermos; // n x (n - 1) / 2
    double razaoelevadaan; // q (elevado a n x (n - 1) / 2)

    double resultado; // a1 (elevado a n) x q (elevado a n x (n - 1) / 2)

    printf("Me informe o valor do primeiro termo (a1) de sua P.G: ");
    scanf("%lf", &primeirotermo);

    printf("Me informe o número de termos (n) de sua P.G: ");
    scanf("%d", &numerodetermos);

    printf("Me informe a razão (q) de sua P.G: ");
    scanf("%lf", &razao);

    primeirotermoelevadoan = pow(primeirotermo, numerodetermos);

    contadonumerodetermos = numerodetermos * (numerodetermos - 1) / 2;

    razaoelevadaan = pow(razao, contadonumerodetermos);

    resultado = primeirotermoelevadoan * razaoelevadaan;

    printf("O produto (P) de sua P.G de primeiro termo (a1) %.2f, de número de termos (n) %d e razão (q) %.2f é igual a %.2f", primeirotermo, numerodetermos, razao, resultado);

    return 0;
}