//  Questão 18. Escreva um algoritmo utilizando a linguagem C que leia um número real e imprima a terça parte deste número.

// Em C, um número real (qualquer número que pode ser representado em uma reta numérica, incluindo números positivos, negativos, inteiros, frações e decimais) é representado principalmente pelos tipos de dados float e double.

// Algoritmo Descritivo:

// 1) Iniciar o programa.

// 2) Declarar uma variável do tipo real (float) chamada 'numerodousuario' para armazenar o número digitado.

// 3) Declarar uma variável do tipo real (float) chamada 'tercapartedonumero' para armazenar o resultado da terça parte.

// 4) Exibir a mensagem: "Digite um número real:".

// 5) Ler o valor digitado pelo usuário e armazenar em 'numerodousuario'.

// 6) Calcular a terça parte do número usando a expressão:
//    'tercapartedonumero' = 'numerodousuario' / 3.

// 7) Exibir a mensagem:
//  "A terça parte do número [numerodousuario] é igual a: [tercapartedonumero]".
//   Formatar a saída para mostrar dois dígitos após a vírgula.

// 8) Finalizar o programa.

#include <stdio.h>

int main(void) {

    float numerodousuario;
    float tercapartedonumero;

    printf("Digite um número real: ");
    scanf("%f", &numerodousuario);

    tercapartedonumero = numerodousuario / 3;

    printf("A terça parte do número %.2f é igual a: %.2f", numerodousuario, tercapartedonumero);

    return 0;
}