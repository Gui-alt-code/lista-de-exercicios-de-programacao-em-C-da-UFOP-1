//  Questão 25. Em épocas de pouco dinheiro, os comerciantes estão procurando aumentar suas vendas oferecendo desconto. Faça um algoritmo utilizando a linguagem C que possa entrar com o valor de um produto e imprima o novo valor tendo em vista que o desconto foi de 9%. Além disso, imprima o valor do desconto.

// Algoritmo Descritivo:

// 1) Iniciar o programa.

// 2) Declarar uma variável do tipo float chamada 'produto' para armazenar o valor do produto.

// 3) Declarar uma variável do tipo float chamada 'calculododesconto' para armazenar o valor do desconto.

// 4) Declarar uma variável do tipo float chamada 'produtocomdesconto' para armazenar o valor do produto com desconto.

// 5) Exibir a mensagem: "Digite o valor de seu produto:"

// 6) Ler o valor digitado pelo usuário e armazenar na variável 'produto'.

// 7) Calcular o valor do desconto multiplicando 'produto' por 0.09 e armazenar em 'calculododesconto'.

// 8) Calcular o novo valor do produto subtraindo 'calculododesconto' de 'produto' e armazenar em 'produtocomdesconto'.

// 9) Exibir a mensagem com o novo preço e o valor do desconto:
//  "O novo preço de seu produto, anteriormente avaliado em [produto], será de [produtocomdesconto]. Ademais, o valor do desconto foi de [calculododesconto]."

// 10) Finalizar o programa.

#include <stdio.h>

int main(void) {

    float produto;
    float calculododesconto;
    float produtocomdesconto;

    printf("Digite o valor de seu produto: ");
    scanf("%f", &produto);

    produtocomdesconto = produto * 0.91;

    calculododesconto = produto - produtocomdesconto;

    printf("O novo preço de seu produto, anteriormente avaliado em %.2f, será de %.2f. Ademais, o valor do desconto foi de %.2f.", produto, produtocomdesconto, calculododesconto);

    return 0;
}

