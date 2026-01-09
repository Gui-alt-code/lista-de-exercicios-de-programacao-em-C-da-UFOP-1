// Questão 5. Ler um número e verificar se ele é par ou ímpar. Quando for par armazenar esse valor em P e quando for ímpar armazená-lo em I. Exibir P e I no final do processamento.

// Algoritmo Descritivo:

// 1) Iniciar o programa.

// 2) Criar uma variável inteira para armazenar o número digitado pelo usuário (numerodigitado).

// 3) Criar duas variáveis inteiras, P e I, inicializadas com 0.

// 4) Exibir a mensagem: "Digite um número:".

// 5) Ler o número digitado pelo usuário e armazenar em numerodigitado.

// 6) Calcular o resto da divisão de numerodigitado por 2 e armazenar em ehpar.

// 7) Verificar o valor de ehpar:

// * Se ehpar for igual a 0, o número é par:

// - Armazenar o valor de numerodigitado na variável P.

// * Caso contrário, o número é ímpar:

// - Armazenar o valor de numerodigitado na variável I.

// 8) Exibir a mensagem: "P (par): [P]".

// 9) Exibir a mensagem: "I (ímpar): [I]".

// 10) Fim do programa.


#include <stdio.h>

int main(void) {

    int numerodigitado;
    int P = 0;
    int I = 0;

    printf("Digite um número: \n");
    scanf("%d", &numerodigitado);

    int ehpar = numerodigitado % 2;

    if(ehpar == 0) {
        P = numerodigitado;
    } else {
        I = numerodigitado;
    }

    printf("P (par): %d\n", P);
    printf("I (impar): %d\n", I);

    return 0;
}

//     if(P != 0) {
//         printf("O valor que está armazenado em P é igual a: %d, um número par", P);
//     } else {
//         printf("O valor que está armazenado em I é igual a: %d, um número ímpar", I);
//     }

//     return 0;
// }

// OBS !!! 

// P != 0

// O usuário digita um número par, por exemplo, 2.

// numerodigitado % 2 == 0 → verdadeiro

// Logo: P = 2; e I continua valendo 0.

// Depois, o código faz:

// if (P != 0)

// E como P agora é 2, a condição é verdadeira, então ele entra nesse bloco e mostra o número armazenado em P. Tudo certo.