//  Questão 22. Seja uma seqüência A,B,C, ...determinando um Progressão Aritmética (P.A.), o termo médio (B) de uma P.A. é determinado pela  média aritmética de seus termos, sucessor (C) e antecessor (A). Com base neste enunciado construa um algoritmo utilizando a linguagem C que calcule o termo médio (B) através de A, C.

// B = (A+C) / 2

// Algoritmo Descritivo:

// 1) Iniciar o programa.

// 2) Declarar uma variável do tipo inteiro chamada 'termosucessor' para armazenar o valor do termo sucessor (C) da P.A.

// 3) Declarar uma variável do tipo inteiro chamada 'termoantecessor' para armazenar o valor do termo antecessor (A) da P.A.

// 4) Declarar uma variável do tipo inteiro chamada 'termomedio' para armazenar o valor do termo médio (B) da P.A.

// 5) Exibir a mensagem: "Me informe o termo sucessor (C) do termo médio (B) que você deseja encontrar:"

// 6) Ler o valor digitado pelo usuário e armazenar na variável 'termosucessor'.

// 7) Exibir a mensagem: "Me informe o termo antecessor (A) do termo médio (B) que você deseja encontrar:"

// 8) Ler o valor digitado pelo usuário e armazenar na variável 'termoantecessor'.

// 9) Calcular o termo médio (B) utilizando a fórmula:
//  'termomedio' = (termosucessor + termoantecessor) / 2

// 10) Exibir a mensagem com o resultado do termo médio:
//   "O termo médio (B) de sua P.A de termo sucessor (C) [termosucessor] e termo antecessor (A) [termoantecessor] é igual a [termomedio]"

// 11) Finalizar o programa.

#include <stdio.h>

int main(void) {

    int termosucessor;
    int termoantecessor;
    int termomedio;

    printf("Me informe o termo sucessor (C) do termo médio (B) que você deseja encontrar: ");
    scanf("%d", &termosucessor);

    printf("Me informe o termo antecessor (A) do termo médio (B) que você deseja encontrar: ");
    scanf("%d", &termoantecessor);
   
    termomedio = (termosucessor + termoantecessor) / 2;

    printf("O termo médio (B) de sua P.A de termo sucessor (C) %d e termo antecessor (A) %d é igual a %d", termosucessor, termoantecessor, termomedio);

    return 0;
}
