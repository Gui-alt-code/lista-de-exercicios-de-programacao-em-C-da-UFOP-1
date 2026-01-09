// Questão 9. Dada a razão de uma P.G. (progressão geométrica) e um termo qualquer, k (ak). Escreva um algoritmo utilizando a linguagem C para calcular qualquer outro termo, n, (an).

// Algoritmo Descritivo:

// 1) Iniciar o programa.

// 2) Criar uma variável do tipo float para armazenar o valor do termo conhecido (ak).

// 3) Criar uma variável do tipo float para armazenar a razão da P.G. (q).

// 4) Criar uma variável do tipo int para armazenar a posição do termo desejado (n).

// 5) Criar uma variável do tipo int para armazenar a posição do termo conhecido (k).

// 6) Criar uma variável do tipo int para armazenar o valor de (n - k).

// 7) Criar uma variável do tipo float para armazenar o valor do termo desejado (an).

// 8) Exibir a mensagem: "Me informe o termo qualquer (ak) de sua P.G:"

// 9) Ler o valor digitado pelo usuário e armazenar em ak.

// 10) Exibir a mensagem: "Me informe a razão (q) de sua P.G:"

// 11) Ler o valor digitado pelo usuário e armazenar em q.

// 12) Exibir a mensagem: "Me informe o valor da posição desejada (n) de sua P.G:"

// 13) Ler o valor digitado pelo usuário e armazenar em n.

// 14) Exibir a mensagem: "Me informe o valor da posição conhecida (k) de sua P.G:"

// 15) Ler o valor digitado pelo usuário e armazenar em k.

// 16) Calcular a diferença entre n e k, e armazenar em subtracaodenek.

// 17) Calcular o valor do termo desejado (an) usando a fórmula:
//   an = ak * q^(n - k)

// 18) Exibir a mensagem:
//   "O valor de sua P.G de termo qualquer (ak) [ak], razão (q) [q], valor da posição desejada (n) [n] e valor da posição conhecida (k) [k], é igual a: [an]"

// 19) Fim do programa.


#include <stdio.h>
#include <math.h>

int main(void) {

    float an;
    float ak;
    float q;
    int n;
    int subtracaodenek;
    int k;

    printf("Me informe o termo qualquer (ak) de sua P.G: \n");
    scanf("%f", &ak);

    printf("Me informe a razão (q) de sua P.G: \n");
    scanf("%f", &q);

    printf("Me informe o valor da posição desejada (n) de sua P.G: \n");
    scanf("%d", &n);

    printf("Me informe o valor da posição conhecida (k) de sua P.G: \n");
    scanf("%d", &k);

    subtracaodenek = n - k;

    an = ak * pow(q, subtracaodenek);

    printf("O valor de sua P.G de termo qualquer (ak) %.1f, razão (q) %.1f, valor da posição desejada (n) %d e valor da posição conhecida (k) %d, é igual a: %.1f", ak, q, n, k, an);

    return 0;
}