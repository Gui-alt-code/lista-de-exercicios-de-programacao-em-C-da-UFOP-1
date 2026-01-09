// Questão 2. Elaborar um programa que efetue a leitura de um valor que esteja entre a faixa de 1 a 9. Após a leitura do valor fornecido pelo usuário, o programa deverá indicar uma de duas mensagens: "O valor está na faixa permitida", caso o usuário forneça o valor nesta faixa, ou a mensagem "O valor está fora da faixa permitida", caso o usuário forneça valores menores que 1 ou maiores que 9.

// Algoritmo Descritivo:

// 1) Iniciar o programa.

// 2) Solicitar ao usuário que digite um número entre 1 e 9.

// 3) Ler o número digitado pelo usuário e armazená-lo na variável valordousuario.

// 4) Realizar uma verificação por meio da variável valornafaixa a fim de verificar se a variável valordousuario é maior ou igual a 1 e menor ou igual a 9.

// * Caso seja, o valor está na faixa pedida.
// * Caso não seja, o valor não está na faixa pedida.

// 5) Informar ao usuário se o valor está na faixa pedida.

// 6) Finalizar o programa.

#include <stdio.h>

int main(void) {

    int valordousuario;

    printf("Digite um valor que esteja entre a faixa de 1 a 9: ");
    scanf("%d", &valordousuario);

// && é o E lógico, só dá verdadeiro se ambos os lados forem verdadeiros.

    int valornafaixa = 1 <= valordousuario && valordousuario <= 9;
    
    if(valornafaixa) {
        printf("O valor está na faixa permitida");
    } else {
        printf("O valor está fora da faixa permitida");
    }

    return 0;
}

