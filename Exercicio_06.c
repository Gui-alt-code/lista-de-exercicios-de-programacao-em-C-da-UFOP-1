// Questão 6. Uma P.A. (progressão aritmética) fica determinada pela sua razão (r) e pelo primeiro termo(a1). Escreva um algoritmo que seja capaz de determinar qualquer termo de uma P.A., dado a razão e o primeiro termo.

// Algoritmo Descritivo:

// 1) Iniciar o programa.

// 2) Criar uma variável inteira para armazenar o número da posição do termo que o usuário deseja encontrar na P.A. (numerodaposicaodotermo).

// 3) Criar uma variável inteira para armazenar o primeiro termo da P.A. (primeirotermo).

// 4) Criar uma variável inteira para armazenar a razão da P.A. (razao).

// 5) Criar uma variável inteira para armazenar o valor do termo calculado (valor).

// 6) Exibir a mensagem: "Me informe o número da posição do termo que você deseja encontrar na sua P.A:".

// 7) Ler o número da posição do termo digitado pelo usuário e armazenar em numerodaposicaodotermo.

// 8) Exibir a mensagem: "Me informe o primeiro termo de sua P.A:".

// 9) Ler o primeiro termo digitado pelo usuário e armazenar em primeirotermo.

// 10) Exibir a mensagem: "Me informe a razão de sua P.A:".

// 11) Ler a razão digitada pelo usuário e armazenar em razao.

// 12) Calcular o valor do termo da P.A usando a fórmula:
//     valor = primeirotermo + (numerodaposicaodotermo - 1) * razao

// 13) Exibir a mensagem: "O valor da P.A de posição [numerodaposicaodotermo], primeiro termo [primeirotermo] e razão [razao] é igual a: [valor]".

// 14) Fim do programa.

#include <stdio.h>

int main(void) {

    int numerodaposicaodotermo; // n
    int primeirotermo; // a1
    int razao; // r
    int valor; // an

    printf("Me informe o número da posição do termo que você deseja encontrar na sua P.A: \n");
    scanf("%d", &numerodaposicaodotermo);

    printf("Me informe o primeiro termo de sua P.A: \n");
    scanf("%d", &primeirotermo);
    
    printf("Me informe a razão de sua P.A: \n");
    scanf("%d", &razao);

    valor = primeirotermo + (numerodaposicaodotermo - 1) * razao;

    printf("O valor da P.A de posição %d, primeiro termo %d e razão %d é igual a: %d", numerodaposicaodotermo, primeirotermo, razao, valor);

    return 0;
}