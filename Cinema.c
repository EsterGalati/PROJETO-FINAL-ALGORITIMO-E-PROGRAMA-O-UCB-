#include <stdio.h>
#include <math.h> //biblioteca matematica
#include <strings.h> //biblioteca de strings
int main (){

    int sessoes, idade, assistiram, valorarrecadado; //variaveis que serao usadas no codigo
    char filme [20], sexo, ingressos; //O sexo deve ser dado em f ou m e se o ingresso foi meia ou inteira em m ou i
    
    printf("Nome: Luiza Munis Nascimento\nMatricula: UC22201024\nCurso:Engenharia de software.");
    printf("\n\nNome: Ester Luiza Siqueira Correa Galati\nMatricula: UC22200640\nCurso:Ciencia da Computacao ");
    printf("\n\nNome: Cristiano Mundin Borges Junior \nMatricula: UC22200034\nCurso:Ciencia da Computacao ");

printf("\n\nQuantidades de sessoes:");
scanf("%d", &sessoes);

while (sessoes>0 && sessoes<3){

printf("Nome do filme:");
scanf("%s", &filme);
fflush (stdin);

printf("Quantas pessoas assistiram o filme?");
scanf("%d", &assistiram);

printf("Digite o sexo e a idade");
scanf("%c%d", &sexo, &idade);
fflush (stdin);

printf("Digite o tipo de ingresso, inteira ou meia:");
scanf("%c", &ingressos);
fflush (stdin);

}}