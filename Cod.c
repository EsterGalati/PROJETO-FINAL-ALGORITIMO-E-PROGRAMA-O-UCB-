#include <stdio.h>
#include <math.h> //biblioteca matematica
#include <strings.h> //biblioteca de strings
int main (){

    int sessoes, idade1, assistiram1, sexo1;
    int idade2, assistiram2, sexo2; //variaveis que serao usadas no codigo
    char filme1 [20], sexo1, ingressos1; //O sexo deve ser dado em f ou m e se o ingresso foi meia ou inteira em m ou i
    char filme2 [20], sexo2, ingressos2; 
    printf("Nome: Luiza Munis Nascimento\nMatricula: UC22201024\nCurso:Engenharia de software.");
    printf("\n\nNome: Ester Luiza Siqueira Correa Galati\nMatricula: UC22200640\nCurso:Ciencia da Computacao ");
    printf("\n\nNome: Cristiano Mundin Borges Junior \nMatricula: UC22200034\nCurso:Ciencia da Computacao ");

printf("\n\nQuantidades de sessoes:");
scanf("%d", &sessoes);// Pergunta quantas sessões tem ao usuário.
while (sessoes >2 || sessoes <1){
    printf("Numero Invalido!");

printf("\n\nQuantidades de sessoes:");
scanf("%d", &sessoes);
}

/////////////////////////////////////////////////////////////////////

printf("Nome do filme:"); //dividir as informacoes de cada sessao
scanf("%s", &filme1);
fflush (stdin);

printf("Quantas pessoas assistiram ao primeiro filme?");
scanf("%d", &assistiram1);

printf("Digite o sexo:");
scanf("%c%d", &sexo1);
fflush (stdin);

printf("Digite a idade");
scanf("%c%d", &idade1);

printf("Digite o tipo de ingresso, inteira ou meia:");
scanf("%c", &ingressos1);
fflush (stdin);


/////////////////////////////////////////////////////////////////////

printf("Nome do filme:"); //dividir as informacoes de cada sessao
scanf("%s", &filme2);
fflush (stdin);

printf("Quantas pessoas assistiram ao primeiro filme?");
scanf("%d", &assistiram2);


}