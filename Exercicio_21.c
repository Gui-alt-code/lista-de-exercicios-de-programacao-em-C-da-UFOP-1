//  Questão 21. Certo dia o professor de Johann Friederich Carl Gauss (aos 10 anos de idade) mandou que os alunos somassem os números de 1 a = 100. Imediatamente Gauss achou a resposta, 5050, aparentemente sem cálculos. Supõe-se que já aí, Gauss, houvesse descoberto a fórmula de uma soma de uma progressão aritmética.

//  Sn = (a1 +an) n / 2

//  Agora você, com o auxílio dos conceitos de algoritmos e da pseudo linguagutilizando a linguagem C, construa uma algoritmo para realizar a soma de uma P.A. de N termos, com o primeiro a1 e o último an.

// Algoritmo Descritivo:

// 1) Iniciar o programa.

// 2) Declarar uma variável do tipo inteiro chamada 'a1' para armazenar o valor do primeiro termo da P.A.

// 3) Declarar uma variável do tipo inteiro chamada 'an' para armazenar o valor do termo final da P.A.

// 4) Declarar uma variável do tipo inteiro chamada 'n' para armazenar o número total de termos da P.A.

// 5) Declarar uma variável do tipo inteiro chamada 'soma' para armazenar o resultado da soma da P.A.

// 6) Exibir a mensagem: "Me informe o valor do primeiro termo (a1) de sua P.A:"

// 7) Ler o valor digitado pelo usuário e armazenar em 'a1'.

// 8) Exibir a mensagem: "Me informe o valor do termo final de sua P.A (an):"

// 9) Ler o valor digitado pelo usuário e armazenar em 'an'.

// 10) Exibir a mensagem: "Me informe o valor do número de termos (n) de sua P.A:"

// 11) Ler o valor digitado pelo usuário e armazenar em 'n'.

// 12) Calcular a soma da P.A. utilizando a fórmula: 
//     'soma' = (a1 + an) * n / 2

// 13) Exibir a mensagem com o resultado da soma:
//     "A soma de sua P.A de [n] termos (n), primeiro termo (a1) igual a [a1] e termo final (an) [an] é igual, [soma]"

// 14) Finalizar o programa.

#include <stdio.h>

int main(void) {

    int a1;
    int an;
    int n;
    int soma;

    printf("Me informe o valor do primeiro termo (a1) de sua P.A: ");
    scanf("%d", &a1);

    printf("Me infome o valor do termo final de sua P.A (an): ");
    scanf("%d", &an);

    printf("Me informe o valor do número de termos (n) de sua P.A: ");
    scanf("%d", &n);

    soma = (a1 + an) * n / 2;

    printf("A soma de sua P.A de %d termos (n), primeiro termo (a1) igual a %d e termo final (an) %d é igual, %d", n, a1, an, soma);

    return 0;
}