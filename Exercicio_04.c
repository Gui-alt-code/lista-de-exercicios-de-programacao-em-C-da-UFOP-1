// Questão 04. Elaborar um programa que leia um número. Se positivo armazene-o em A, se for negativo, em B. No final mostrar o resultado.

// Algoritmo Descritivo:

// 1) Iniciar o programa.

// 2) Criar uma variável inteira para armazenar o número digitado pelo usuário (numerodousuario).

// 3) Criar duas variáveis inteiras, A e B, inicializadas com 0.

// 4) Exibir a mensagem: "Digite um número:".

// 5) Ler o número digitado pelo usuário e armazenar em numerodousuario.

// 6) Verificar se numerodousuario é igual a 0:

// * Se for igual a 0, exibir a mensagem: "O valor 0 não é permitido, teste o código novamente com outro valor." e encerrar o programa.

// 7) Se numerodousuario for maior que 0:

// * Exibir a mensagem: "O número [numerodousuario] se trata de um número positivo."

// * Armazenar o valor de numerodousuario na variável A.

// 8) Se numerodousuario for menor que 0:

// * Exibir a mensagem: "O número [numerodousuario] se trata de um número negativo."

// * Armazenar o valor de numerodousuario na variável B.

// 9) Verificar se A é diferente de 0:

// * Se sim, exibir a mensagem: "Valor armazenado em A: [A]".

// * Caso contrário, exibir a mensagem: "Valor armazenado em B: [B]".

// 10) Fim do programa.


#include <stdio.h>

int main(void) {

    int numerodousuario;

    // Já que uma das variáveis irá guardar um valor, consquentemente, a outra armazenaria lixo de memória. Portanto, inicialize as duas com 0;

    // Tais zeros, permitem que você os como um "sinal" pra saber qual variável realmente foi usada. Ou seja, 0 para falso, não foi usada, e 1 para verdadeiro, foi usada

    int A = 0;
    int B = 0;

    printf("Digite um número: ");
    scanf("%d", &numerodousuario);

    if(numerodousuario == 0) {
        printf("O valor 0 não é permitido, teste o código novamente com outro valor.\n");
        return 0;
    } else if (numerodousuario > 0) {
        printf("O número %d se trata de um número positivo.\n", numerodousuario);
        A = numerodousuario;
    } else {
        printf("O número %d se trata de um número negativo.\n", numerodousuario);
        B = numerodousuario;
    }

    // esse, "A != 0", indica se o valor de A for maior/diferente de 0, enquanto o else trata se B for menor/diferente de 0.

    if(A != 0) {
        printf("Valor armazenado em A: %d", A);
    } else {
        printf("Valor armazenado em B: %d", B);
    } 

    return 0;
}

// Quando você quer guardar um valor dentro de uma variável em C, você usa o sinal de atribuição (=). Por exemplo:

// A = numerodousuario;

// Essa linha diz: “Pegue o valor que está em numerodousuario e coloque dentro de A”.
