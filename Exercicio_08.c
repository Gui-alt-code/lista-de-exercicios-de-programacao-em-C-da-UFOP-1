// Questão 8. Dada a razão de uma P.A. (progressão aritmética) e um termo qualquer, k (ak). Escreva um algoritmo utilizando a linguagem C para calcular qualquer outro termo, n, (an).

// Algoritmo Descritivo:

// 1) Iniciar o programa.

// 2) Criar uma variável inteira para armazenar a razão da P.A. (r).

// 3) Criar uma variável inteira para armazenar o valor do termo conhecido (ak).

// 4) Criar uma variável inteira para armazenar a posição do termo conhecido (k).

// 5) Criar uma variável inteira para armazenar a posição do termo desejado (n).

// 6) Criar uma variável inteira para armazenar o valor do termo desejado (calculo).

// 7) Exibir a mensagem: "Me informe o valor da razão de sua P.A:".

// 8) Ler o valor digitado pelo usuário e armazenar em r.

// 9) Exibir a mensagem: "Me informe o valor do termo conhecido (ak) em sua P.A:".

// 10) Ler o valor digitado pelo usuário e armazenar em ak.

// 11) Exibir a mensagem: "Me informe o valor da posição (n) em sua P.A:".

// 12) Ler o valor digitado pelo usuário e armazenar em n.

// 13) Exibir a mensagem: "Me informe o valor da posição do termo conhecido (k) em sua P.A:".

// 14) Ler o valor digitado pelo usuário e armazenar em k.

// 15) Calcular o valor do termo desejado (an) usando a fórmula:
//   calculo = ak + r * (n - k)

// 16) Exibir a mensagem:
//   "O valor do termo de posição [n], com termo conhecido [ak] na posição [k], e razão [r], é igual a: [calculo]"

// 17) Fim do programa.


#include <stdio.h>

int main(void) {

    int r;   // razão
    int ak;  // termo conhecido
    int k;   // posição do termo conhecido
    int n;   // posição do termo desejado

    int calculo;

    printf("Me informe o valor da razão de sua P.A: ");
    scanf("%d", &r);

    printf("Me informe o valor do termo conhecido (ak) em sua P.A: ");
    scanf("%d",  &ak);

    printf("Me informe o valor da posição (n) em sua P.A: ");
    scanf("%d", &n);

    printf("Me informe o valor da posição do termo conhecido (k) em sua P.A: ");
    scanf("%d", &k);

    calculo = ak + r * (n - k);

    printf("O valor do termo conhecido (ak) em sua P.A %d , de razão %d, de numéros termos (n) igual a %d e valor de posição k do termo conhecido %d, é igual a %d", ak, r, n, k, calculo);

    return 0;
}