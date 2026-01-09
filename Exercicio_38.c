//  Questão 38. Criar um algoritmo utilizando a linguagem C que leia o valor de um depósito e o valor da taxa de juros. Calcular e imprimir o valor do rendimento e o valor total depois do rendimento.

// Algoritmo Descritivo:

// 1) Iniciar o programa.

// 2) Declarar as variáveis do tipo real (float): 
//  'capital', 'taxa', 'conversodataxa', 'juros' e 'montante'.

// 3) Exibir a mensagem: "Me informe o valor do depósito realizado:".

// 4) Ler o valor digitado pelo usuário e armazenar em 'capital'.

// 5) Exibir a mensagem: "Me informe o valor da taxa de juros:".

// 6) Ler o valor digitado pelo usuário (em porcentagem) e armazenar em 'taxa'.

// 7) Calcular o valor da taxa na forma decimal:
//  - conversodataxa = taxa / 100.

// 8) Calcular o valor do rendimento (juros simples):
//  - juros = capital * conversodataxa.

// 9) Calcular o valor total depois do rendimento (montante):
//  - montante = capital + juros.

// 10) Exibir a mensagem:
//   - "O valor do rendimento... é igual a: [juros]... o valor total depois do rendimento é igual: [montante]"

// 11) Finalizar o programa.

#include <stdio.h>

int main(void) {

    float capital;
    float taxa;
    float conversaodataxa;
    float juros;
    float montante;

    printf("Me informe o valor do depósito realizado: ");
    scanf("%f", &capital);

    printf("Me informe o valor da taxa de juros: ");
    scanf("%f", &taxa);

    conversaodataxa = taxa / 100;

    juros = capital * conversaodataxa;

    montante = capital + juros;

    printf("O valor do rendimento, em um primeiro momento, é igual a: %.02f. Entretanto, agora, o valor total depois do rendimento é igual: %.02f", juros, montante);

    return 0;
}