//  Questão 34. Criar um algoritmo utilizando a linguagem C que leia o  valor de um depósito e o valor da taxa de juros. Calcular e imprimir o valor  do rendimento e o valor total depois do rendimento.

// Fórmula usada na questão: Juros simples = Capital x taxa (em forma decimal)

// Fórmula usada na questão: Montante = Capital + Juros simples

// Algoritmo Descritivo:

// 1) Iniciar o programa.

// 2) Declarar as variáveis reais: 'capital', 'taxa', 'formadecimal', 'juros' e 'montante'.

// 3) Exibir a mensagem: "Me informe o valor do depósito realizado:".

// 4) Ler o valor digitado pelo usuário e armazenar em 'capital'.

// 5) Exibir a mensagem: "Me informe o valor da taxa de juros:".

// 6) Ler o valor digitado pelo usuário e armazenar em 'taxa'.

// 7) Converter a taxa de juros para forma decimal:
//    - formadecimal = taxa / 100.

// 8) Calcular o valor do rendimento (juros simples):
//  - juros = capital * formadecimal.

// 9) Exibir a mensagem: "O valor de seu rendimento foi: [juros]".

// 10) Calcular o valor total após o rendimento:
//   - montante = capital + juros.

// 11) Exibir a mensagem: "O valor total depois de seu rendimento foi: [montante]".

// 12) Finalizar o programa.

#include <stdio.h>
#include <math.h>

int main(void) {

    float montante;
    float juros;
    float capital;
    float taxa;
    float formadecimal;

    printf("Me informe o valor do depósito realizado: ");
    scanf("%f", &capital);

    printf("Me informe o valor da taxa de juros: ");
    scanf("%f", &taxa);

    formadecimal = taxa / 100;

    juros = capital * formadecimal;

    printf("O valor de seu rendimento foi: %.02f\n", juros);

    montante = capital + juros;

    printf("O valor total depois de seu rendimento foi: %.2f\n", montante);

    return 0;
}