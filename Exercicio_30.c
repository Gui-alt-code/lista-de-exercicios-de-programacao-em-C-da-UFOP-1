// Questão 30. Criar um algoritmo utilizando a linguagem C que leia o numerador e o denominador de uma fração e transforme esses valores em um número racional.

// Algoritmo Descritivo:

// 1) Iniciar o programa.

// 2) Declarar uma variável inteira chamada 'numerador' para armazenar o numerador da fração.

// 3) Declarar uma variável inteira chamada 'denominador' para armazenar o denominador da fração.

// 4) Exibir a mensagem: "Digite o valor de seu numerador:"

// 5) Ler o valor digitado pelo usuário e armazenar na variável 'numerador'.

// 6) Exibir a mensagem: "Digite o valor de seu denominador:"

// 7) Ler o valor digitado pelo usuário e armazenar na variável 'denominador'.

// 8) Verificar se o denominador é igual a 0:
//   - Se sim, exibir a mensagem: "Denominadores iguais a 0, não são permitidos! Teste o código novamente com outro valor."
//   - Encerrar o programa.

// 9) Exibir a mensagem: "O seu numerador [numerador] e seu denominador [denominador], convertidos em formato de número racional ficaria da seguinte forma: [numerador] / [denominador]"

// 10) Finalizar o programa.

#include <stdio.h>

int main(void) {

    int numerador;
    int denominador;

    printf("Digite o valor de seu numerador: ");
    scanf("%d", &numerador);

    printf("Digite o valor de seu denominador: ");
    scanf("%d", &denominador);
    
    if (denominador == 0) {
        printf("Denominadores iguais a 0, não são permitidos! Teste o código novamente com outro valor.");
        return 0;
    }

    printf("O seu numerador %d e seu denominador %d, convertidos em formato de número racional ficaria da seguinte forma: %d / %d", numerador, denominador, numerador, denominador);

    return 0;
}
