// Questão 10. Uma P.G. (progressão geométrica) fica determinada pela sua razão (q) e pelo primeiro termo (a1). Escreva um algoritmo utilizando a linguagem C que seja capaz de determinar qualquer termo de uma P.G., dado a razão e o primeiro termo.

// Algoritmo Descritivo:

// 1) Iniciar o programa.

// 2) Criar uma variável do tipo float para armazenar o valor do primeiro termo da P.G. (a1).

// 3) Criar uma variável do tipo float para armazenar a razão da P.G. (q).

// 4) Criar uma variável do tipo int para armazenar a posição desejada (n).

// 5) Criar uma variável do tipo int para armazenar a subtração (n - 1).

// 6) Criar uma variável do tipo float para armazenar o valor do termo desejado (an).

// 7) Exibir a mensagem: "Digite o valor do primeiro termo (a1) de sua P.G:"

// 8) Ler o valor digitado pelo usuário e armazenar em a1.

// 9) Exibir a mensagem: "Digite o valor da razão (q) de sua P.G:"

// 10) Ler o valor digitado pelo usuário e armazenar em q.

// 11) Exibir a mensagem: "Digite o valor da posição conhecida (n) de sua P.G:"

// 12) Ler o valor digitado pelo usuário e armazenar em n.

// 13) Calcular a diferença entre n e 1, e armazenar em subtracaoden.

// 14) Calcular o valor do termo desejado (an) usando a fórmula:
//   an = a1 * q^(n - 1)

// 15) Exibir a mensagem:
//   "O valor de sua P.G de primeiro termo (a1) [a1], razão (q) [q] e valor de posição conhecida (n) [n] é igual a: [an]"

// 16) Fim do programa.


#include <stdio.h>
#include <math.h>

int main(void) {

    float an;
    float a1;
    float q;
    int n;
    int subtracaoden;

    printf("Digite o valor do primeiro termo (a1) de sua P.G: \n");
    scanf("%f", &a1);

    printf("Digite o valor da razão (q) de sua P.G: \n");
    scanf("%f", &q);

    printf("Digite o valor da posição conhecida (n) de sua P.G: \n");
    scanf("%d", &n);

    subtracaoden = n - 1;

    an = a1 * pow(q, subtracaoden);

    printf("O valor de sua P.G de primeiro termo (a1) %f, razão (q) %f e valor de posição conhecida (n) %d é igual a: %.2f", a1, q, n, an);

    return 0;
}


