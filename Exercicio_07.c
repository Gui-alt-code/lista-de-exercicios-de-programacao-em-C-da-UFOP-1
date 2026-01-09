// Questão 7. Uma P.G. (progressão geométrica) fica determinada pela sua razão (q) e pelo primeiro termo (a1). Escreva um algoritmo utilizando a linguagem C que seja capaz de determinar qualquer termo de uma P.G., dado a razão e o primeiro termo.

// Algoritmo Descritivo:

// 1) Iniciar o programa.

// 2) Criar uma variável inteira para armazenar o primeiro termo da P.G. (primeirotermo).

// 3) Criar uma variável inteira para armazenar a razão da P.G. (razao).

// 4) Criar uma variável inteira para armazenar a posição do termo que o usuário deseja calcular (numerodetermos).

// 5) Criar uma variável inteira para armazenar o valor do expoente, que é (numerodetermos - 1) (expoente).

// 6) Criar uma variável real (double) para armazenar o valor do termo calculado da P.G. (termodapg).

// 7) Exibir a mensagem: "Me informe o primeiro termo de sua P.G:".

// 8) Ler o valor digitado pelo usuário e armazenar em primeirotermo.

// 9) Exibir a mensagem: "Me informe a razão de sua P.G:".

// 10) Ler o valor digitado pelo usuário e armazenar em razao.

// 11) Exibir a mensagem: "Me informe o número de termos de sua P.G:".

// 12) Ler o valor digitado pelo usuário e armazenar em numerodetermos.

// 13) Calcular o expoente: expoente = numerodetermos - 1

// 14) Calcular o termo da P.G. utilizando a fórmula:
//     termodapg = primeirotermo * (razao elevado à expoente)

// 15) Exibir a mensagem:
//     "O valor de sua P.G de primeiro termo [primeirotermo], razão [razao] e número de termos [numerodetermos] é igual a: [termodapg]"

// 16) Fim do programa.


#include <stdio.h>
#include <math.h>

int main(void) {

    double termodapg;
    int primeirotermo; // a1
    int razao; // q
    int numerodetermos; // n

    printf("Me informe o primeiro termo de sua P.G: \n");
    scanf("%d", &primeirotermo);

    printf("Me informe a razão de sua P.G: \n");
    scanf("%d", &razao);

    printf("Me informe o número de termos de sua P.G: \n");
    scanf("%d", &numerodetermos);

    int subtracaodonumerodetermos = numerodetermos - 1; // n - 1 => expoente

    termodapg = primeirotermo * pow(razao, subtracaodonumerodetermos);

    printf("O valor de sua P.G de primeiro termo %d, razão %d e número de termos %d é igual a: %.0f \n", primeirotermo, razao, numerodetermos, termodapg);

    return 0;
}

// O tipo double representa números reais (com casas decimais). Para calcular potências em C, usamos a função pow(), que recebe dois argumentos (base e expoente) e retorna um double. Para usá-la, é necessário incluir a biblioteca #include <math.h>. Na hora de imprimir um double, usamos o especificador %f, podendo ajustar a quantidade de casas com, por exemplo, %.2f.