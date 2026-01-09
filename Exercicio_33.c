// Questão 33. Criar um algoritmo utilizando a linguagem C que leia um valor de hora (hora:minutos) e informe (calcule) o total de minutos se passaram desde o início do dia (0:00h).

// Algoritmo Descritivo:

// 1) Iniciar o programa.

// 2) Declarar uma variável inteira chamada 'hora' para armazenar a hora atual.

// 3) Declarar uma variável inteira chamada 'minutos' para armazenar os minutos atuais.

// 4) Declarar uma variável inteira chamada 'calculo' para armazenar o total de minutos desde 0:00.

// 5) Exibir a mensagem: "Me informe a hora atual (Exemplos: 0, 1, 5, 9,...):"

// 6) Ler o valor digitado pelo usuário e armazenar na variável 'hora'.

// 7) Verificar se 'hora' é menor que 0 ou maior ou igual a 24:
//  - Se verdadeiro, exibir mensagem de erro e encerrar o programa.

// 8) Exibir a mensagem: "Me informe os minutos da hora atual (Exemplos: 5, 10, 17, 43,...):"

// 9) Ler o valor digitado pelo usuário e armazenar na variável 'minutos'.

// 10) Verificar se 'minutos' é menor que 0 ou maior ou igual a 60:
//   - Se verdadeiro, exibir mensagem de erro e encerrar o programa.

// 11) Calcular o total de minutos desde o início do dia:
//   - calculo = hora * 60 + minutos

// 12) Exibir a mensagem: "A hora atual de acordo com você é: [hora]:[minutos]"

// 13) Exibir a mensagem: "Já se passaram [calculo] minutos desde o início do dia (0:00h)"

// 14) Finalizar o programa.

#include <stdio.h>

int main(void) {

    int hora;
    int minutos;
    int calculo;

    printf("Me informe a hora atual (Exemplos: 0, 1, 5, 9,...): ");
    scanf("%d", &hora);

    if(hora >= 24) {
        printf("É impossível que a hora atual ultrapasse ou seja igual a 24, tente o código novamente com outro valor.");
        return 0;
    }

    if(hora < 0) {
        printf("É impossível que a hora atual seja um número negativo, tente o código novamente com um valor positivo.");
        return 0;
    }

    printf("Me informe os minutos da hora atual (Exemplos: 5, 10, 17, 43,...): ");
    scanf("%d", &minutos);

    if(minutos >= 60) {
        printf("É impossível que os minutos ultrapassem ou sejam iguais a 60, tente o código novamente com um valor abaixo de 60.");
        return 0;
    }

    if(minutos < 0) {
        printf("É impossível que os minutos sejam valores negativos, tente o código novamente com um valor positivo.");
        return 0;
    }

    calculo = hora * 60 + minutos;

    printf("A hora atual de acordo com você, é %02d:%02d. Ademais, se passaram %d minutos, desde o início do dia (0:00h).", hora, minutos, calculo);

    return 0;
}