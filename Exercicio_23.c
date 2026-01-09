//  Questão 23. Seja uma seqüência A,B,C, ... determinando um Progressão Geométrica (P.G.), o termo médio (B) de uma P.G. é determinado pela média geométrica de seus termos, sucessor (C) e antecessor (B). Com base neste enunciado construa um algoritmo utilizando a linguagem C que calcule o termo médio (B) através de A, C.

//  B2 = A x C

// Algoritmo Descritivo:

// 1) Iniciar o programa.

// 2) Declarar uma variável do tipo double chamada 'termoantecessor' para armazenar o valor do termo antecessor (A) da P.G.

// 3) Declarar uma variável do tipo double chamada 'termosucessor' para armazenar o valor do termo sucessor (C) da P.G.

// 4) Declarar uma variável do tipo double chamada 'termomedio' para armazenar o valor do termo médio (B) da P.G.

// 5) Declarar uma variável do tipo double chamada 'produto' para armazenar o produto entre o termo antecessor (A) e o termo sucessor (C).

// 6) Exibir a mensagem: "Me informe o termo antecessor (A) de sua P.G:"

// 7) Ler o valor digitado pelo usuário e armazenar na variável 'termoantecessor'.

// 8) Exibir a mensagem: "Me informe o termo sucessor (C) de sua P.G:"

// 9) Ler o valor digitado pelo usuário e armazenar na variável 'termosucessor'.

// 10) Calcular o produto de 'termoantecessor' e 'termosucessor' e armazenar na variável 'produto'.

// 11) Calcular a raiz quadrada de 'produto' utilizando a função sqrt() e armazenar o resultado na variável 'termomedio'.

// 12) Exibir a mensagem com o resultado do termo médio:
//   "O termo médio (B) de sua P.G de termo antecessor (A) [termoantecessor] e termo sucessor (C) [termosucessor] é igual a [termomedio]"

// 13) Finalizar o programa.

#include <stdio.h>
#include <math.h>

int main(void) {

    double termoantecessor;
    double termomedio;
    double termosucessor;
    
    double produto;

    printf("Me informe o termo antecessor (A) de sua P.G: ");
    scanf("%lf", &termoantecessor);

    printf("Me informe o termo sucessor (C) de sua P.G: ");
    scanf("%lf", &termosucessor);

    produto = termoantecessor * termosucessor;

    // 🧪 Etapa 2: Como usar sqrt()?
    // A função sqrt() recebe um número do tipo double e devolve a raiz quadrada como double. Exemplo:

    // double raiz = sqrt(16);  // resultado: 4.0    

    termomedio = sqrt(produto);

    printf("O termo médio (B) de sua P.G de termo antecessor (A) %.2f e termo sucessor (C) %.2f é igual: %.2f", termoantecessor, termosucessor, termomedio);
    
    return 0;
}
