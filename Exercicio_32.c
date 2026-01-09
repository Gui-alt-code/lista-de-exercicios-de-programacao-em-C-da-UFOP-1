// Questão 32. Criar um algoritmo utilizando a linguagem C que leia um valor de hora (hora:minutos) e informe (calcule) o total de minutos se passaram desde o início do dia (0:00h)

// Algoritmo Descritivo:

// 1) Iniciar o programa.

// 2) Declarar uma variável inteira chamada 'hora' para armazenar a hora atual.

// 3) Declarar uma variável inteira chamada 'minutos' para armazenar os minutos atuais.

// 4) Declarar uma variável inteira chamada 'calculo' para armazenar o total de minutos desde 0:00.

// 5) Exibir a mensagem: "Me informe a hora atual (Ex: 0, 1, 2,..., 23):"

// 6) Ler o valor digitado pelo usuário e armazenar na variável 'hora'.

// 7) Verificar se 'hora' é menor que 0 ou maior ou igual a 24:
//  - Se verdadeiro, exibir mensagem de erro e encerrar o programa.

// 8) Exibir a mensagem: "Me informe os minutos da hora atual (Ex: 0, 1, 2,..., 59):"

// 9) Ler o valor digitado pelo usuário e armazenar na variável 'minutos'.

// 10) Verificar se 'minutos' é menor que 0 ou maior ou igual a 60:
//   - Se verdadeiro, exibir mensagem de erro e encerrar o programa.

// 11) Calcular o total de minutos desde o início do dia:
//   - calculo = hora * 60 + minutos

// 12) Exibir a mensagem: "A hora atual de acordo com você é: [hora]:[minutos]"

// 13) Exibir a mensagem: "Já se passaram [calculo] minutos desde o início do dia (0:00)"

// 14) Finalizar o programa.

#include <stdio.h>

int main(void) {

    int hora;
    int minutos;
    int calculo;

    printf("Me informe a hora atual (Ex: 2, 10, 14,...): ");
    scanf("%d", &hora);

    if(hora >= 24) {
        printf("É impossível que hora atual ultrapasse ou seja igual 24, tente o código novamente com outro valor!");
        return 0;
    }

    if(hora < 0) {
        printf("A hora atual não pode ser menor que 0, tente o código novamente com outro valor!");
        return 0;
    }
    
    printf("Me informe os minutos da hora atual (Ex: 20, 35, 45): ");
    scanf("%d", &minutos);

    if(minutos >= 60) {
        printf("É impossível que os minutos atuais ultrapassem ou sejam iguais a 60, tente o código novamente com outro valor!");
        return 0;
    }

    if(minutos < 0) {
        printf("Os minutos não podem ser valores negativos, tente o código novamente com outro valor!");
        return 0;
    }

    printf("A hora atual, de acordo com você é: %d:%02d", hora, minutos);

    calculo = hora * 60 + minutos;

    printf("Já se passaram %d minutos, desde o início do dia (0:00)", calculo);

}

// %0Nd → preenche com zeros à esquerda até ter N dígitos.

// Exemplos:

// int x = 5;
// printf("%02d\n", x); // 05  → 2 dígitos
// printf("%03d\n", x); // 005 → 3 dígitos
// printf("%04d\n", x); // 0005 → 4 dígitos

// Se o número já tiver mais dígitos que N, ele não corta nada, apenas imprime normalmente:

// int y = 123;
// printf("%02d\n", y); // 123 → não corta, só ignora o preenchimento
