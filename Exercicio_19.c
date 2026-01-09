//  Questão 19. Escreva um algoritmo utilizando a linguagem C que leia dois números reais e imprima a média aritmética entre esses dois valores com a seguinte mensagem MEDIA antes do resultado.

// Algoritmo Descritivo:

// 1) Iniciar o programa.

// 2) Declarar uma variável do tipo real (float) chamada 'numerorealum' para armazenar o primeiro número.

// 3) Declarar uma variável do tipo real (float) chamada 'numerorealdois' para armazenar o segundo número.

// 4) Declarar uma variável do tipo real (float) chamada 'mediadosnumeros' para armazenar a média dos dois números.

// 5) Exibir a mensagem: "Digite o seu primeiro número real:".

// 6) Ler o valor digitado pelo usuário e armazenar em 'numerorealum'.

// 7) Exibir a mensagem: "Digite o seu segundo número real:".

// 8) Ler o valor digitado pelo usuário e armazenar em 'numerorealdois'.

// 9) Calcular a média dos dois números:  
//  'mediadosnumeros' = (numerorealum + numerorealdois) / 2.0.

// 10) Exibir a mensagem:  
//   "MEDIA: [mediadosnumeros]" com duas casas decimais.

// 11) Finalizar o programa.


#include <stdio.h>

int main(void) {

    float numerorealum;
    float numerorealdois;
    float mediadosnumeros;

    printf("Digite o seu primeiro número real: ");
    scanf("%f", &numerorealum);

    printf("Digite o seu segundo número real: ");
    scanf("%f", &numerorealdois);

    mediadosnumeros = (numerorealum + numerorealdois) / 2.0;

    printf("MEDIA: %.2f", mediadosnumeros);

    return 0; 
}