//  Questão 16. Escreva um algoritmo utilizando a linguagem C que leia um número inteiro e imprima o seu sucessor e seu antecessor.

// Algoritmo Descritivo:

// 1) Iniciar o programa.

// 2) Declarar uma variável do tipo inteiro chamada 'numerodousuario' para armazenar o número digitado pelo usuário.

// 3) Declarar uma variável do tipo inteiro chamada 'sucessor' para armazenar o sucessor do número.

// 4) Declarar uma variável do tipo inteiro chamada 'antecessor' para armazenar o antecessor do número.

// 5) Exibir a mensagem: "Digite um número inteiro:".

// 6) Ler o valor digitado pelo usuário e armazenar em 'numerodousuario'.

// 7) Calcular o sucessor somando 1 ao valor de 'numerodousuario' e armazenar em 'sucessor'.

// 8) Calcular o antecessor subtraindo 1 do valor de 'numerodousuario' e armazenar em 'antecessor'.

// 9) Exibir a mensagem:
//  "O sucessor e o antecessor do número [numerodousuario] são, respectivamente, [sucessor] e [antecessor]".

// 10) Finalizar o programa.


#include <stdio.h>

int main(void) {

    int numerodousuario;
    int sucessor;
    int antecessor;

    printf("Digite um número inteiro: ");
    scanf("%d", &numerodousuario);

    sucessor = numerodousuario + 1;
    antecessor = numerodousuario - 1;

    printf("O sucessor e o antecessor do número %d são, respectivamente, %d e %d", numerodousuario, sucessor, antecessor);

    return 0;
}
