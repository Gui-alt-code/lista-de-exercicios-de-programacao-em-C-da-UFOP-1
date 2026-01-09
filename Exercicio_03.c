// Questão 3. Elaborar um programa que efetue a leitura do nome e do sexo de uma pessoa, apresentando como saída uma das seguintes mensagens: "Ilmo Sr.", para o sexo informado como masculino, ou a mensagem "Ilma Sra.". Apresente também abaixo da mensagem impressa o nome da pessoa.

#include <stdio.h> 

int main(void) {

    char nome[30];
    char sexo;

    printf("Me informe o seu nome: ");
    scanf("%s", nome);

    printf("Me informe o seu sexo, (M) para masculino e (F) para feminino: ");
    scanf(" %c", &sexo); // Foi adicionado um espaço antes de %c para o scanf não pegar o \n do scanf acima (de &nome).

    if(sexo != 'M' && sexo != 'F') {
        printf("Sexo não reconhecido, tente o código novamente com os caractéres especificados");
        return 0;
    } else if (sexo == 'M') {
        printf("Ilmo Sr. \n");
        printf("%s", nome);
    } else {
        printf("Ilma Sra. \n");
        printf("%s", nome);
    }

    return 0;
}