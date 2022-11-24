#include <stdio.h>
#include <math.h> //biblioteca matematica
#include <strings.h> //biblioteca de strings
int main (){

    int sessoes, idade1, assistiram1, contador;
 //variaveis que serao usadas no codigo
    char filme1[20];
    char sexo1, ingressos1; //O sexo deve ser dado em f ou m e se o ingresso foi meia ou inteira em m ou i

   int  idade2, assistiram2;;
 //variaveis que serao usadas no codigo
    char filme2[20];
    char sexo2, ingressos2;

    printf("Nome: Luiza Munis Nascimento\nMatricula: UC22201024\nCurso:Engenharia de software.");
    printf("\n\nNome: Ester Luiza Siqueira Correa Galati\nMatricula: UC22200640\nCurso:Ciencia da Computacao ");
    printf("\n\nNome: Cristiano Mundin Borges Junior \nMatricula: UC22200034\nCurso:Ciencia da Computacao ");

printf("\n\nQuantidades de sessoes:");
scanf("%d", &sessoes);// Pergunta quantas sessões tem ao usuário.
while (sessoes >2 || sessoes <1){ // corrigir
    printf("Numero Invalido!");

printf("\n\nQuantidades de sessoes:");
scanf("%d", &sessoes);
}
fflush (stdin);
/////////////////////////////////////////////////////////////////////

printf("Nome do filme:"); //dividir as informacoes de cada sessao
fgets(filme1, 20,stdin);
fflush (stdin);


printf("\nQuantas pessoas assistiram ao primeiro filme?");
scanf("%d", &assistiram1);

while (assistiram1<=10){ 
    printf("Numero Invalido!");

printf("\nQuantas pessoas assistiram ao primeiro filme?");
scanf("%d", &assistiram1);
}

for(contador = 0; contador < assistiram1; contador++){//corrigir contador
    fflush (stdin);

printf("Digite o sexo da %d° pessoa:", contador +1);// corrigir para aceitar só f e m
scanf("%c", &sexo1);
fflush (stdin);

printf("Digite a idade");
scanf("%d", &idade1);
fflush (stdin);

printf("Digite o tipo de ingresso, inteira ou meia:");
scanf("%c", &ingressos1); // corrigir para aceitar só i e m
fflush (stdin);
}
///////////////////////////////////////////////////////////////////////////

printf("Nome do filme:"); //dividir as informacoes de cada sessao
fgets(filme2, 20,stdin);
fflush (stdin);


printf("\nQuantas pessoas assistiram ao primeiro filme?");
scanf("%d", &assistiram2);

while (assistiram1<=10){ 
    printf("Numero Invalido!");

printf("\nQuantas pessoas assistiram ao primeiro filme?");
scanf("%d", &assistiram2);
}

for(contador = 0; contador < assistiram1; contador++){//corrigir contador
    fflush (stdin);

printf("Digite o sexo da %d° pessoa:", contador +1);// corrigir para aceitar só f e m
scanf("%c", &sexo2);
fflush (stdin);

printf("Digite a idade");
scanf("%d", &idade2);
fflush (stdin);

printf("Digite o tipo de ingresso, inteira ou meia:");
scanf("%c", &ingressos2); // corrigir para aceitar só i e m
fflush (stdin);
}


}