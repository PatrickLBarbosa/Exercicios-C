#include <stdio.h>
#include <string.h>
void limpar_entrada(){
    char c;
    while ((c = getchar()) != '\n' && c != EOF){}
}
int main()
{
    int idade;
    char nome[50];

    printf("Digite a idade: ");
    scanf("%d", &idade);
    printf("Digite o nome: ");
    limpar_entrada();
    fgets(nome,50,stdin);

    printf("Idade: %d\n", idade);
    printf("Nome: %s\n", nome);

    return 0;
}
