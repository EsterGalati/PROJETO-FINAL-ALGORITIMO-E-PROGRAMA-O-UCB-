#include <stdio.h>
#include <math.h> //biblioteca matematica
#include <strings.h> //biblioteca de strings
int main (){

    int sessoes, idade1, assistiram1, contador; //variaveis
    char filme1[20];//variaveis
    char sexo1, ingressos1; //O sexo será dado em F ou M. O ingresso será dado como  meia ou inteira respectivamente M ou I

    int  idade2, assistiram2; //variaveis
    char filme2[20];//variaveis
    char sexo2, ingressos2;//variaveis

    printf("Nome: Luiza Munis Nascimento\nMatricula: UC22201024\nCurso:Engenharia de software.");
    printf("\n\nNome: Ester Luiza Siqueira Correa Galati\nMatricula: UC22200640\nCurso:Ciencia da Computacao ");
    printf("\n\nNome: Cristiano Mundin Borges Junior \nMatricula: UC22200034\nCurso:Ciencia da Computacao ");


    printf("Bem Vindo, para melhor lhe atender informe:\n");
    printf("\n\nQuantidades de sessoes:\n");
    scanf("%d", &sessoes);// Pergunta quantas sessões tem ao usuário.

while (sessoes >2 || sessoes <1){ // corrigir      Esse While serve para delimitar a quantidade de sessões para apenas 2, e repetir a pergunta, caso o usuario coloque um valor diferente.

    printf("Numero Invalido!");

    printf("\n\nQuantidades de sessoes:");
    scanf("%d", &sessoes);
}
    fflush (stdin);
/////////////////////////////////////////////////////////////////////

    printf("Nome do filme:"); /*Nessa etapa iremos dividir as informações de cada sessão,incluindo suas respectivas informações incluindo quantidade, sexo, idade e tipo de ingresso.*/
    fgets(filme1, 20,stdin);
    fflush (stdin);


    printf("\nQuantas pessoas assistiram ao filme?"); /*Pergunta quantas pessoas assistiram ao filme e guarda esse valor.*/
    scanf("%d", &assistiram1);

while (assistiram1<=10){ /*Delimita para que o numero de pessoas que assistiram o filme não seja menor do que 10 pessoas*/
    printf("Numero Invalido!");

    printf("\nQuantas pessoas assistiram ao filme?\n");/*Pergunta quantas pessoas assistiram ao filme e guarda esse valor.*/
    scanf("%d", &assistiram1);
}

for(contador = 0; contador < assistiram1; contador++){//corrigir contador /*Utilizamos o FOR para perguntar as informações de cada  pessoa que assistiu o filme respectivamente*/
    fflush (stdin);

    printf("Digite o sexo da %d pessoa:", contador +1);// corrigir para aceitar só f e m /*Pergunta o sexo da pessoa sendo obrigatório responder com M para (Masculino) F para (Feminino)*/
    scanf("%c", &sexo1);
    fflush (stdin);

    printf("Digite a idade\n"); /*Pergunta a idade da pessoa*/
    scanf("%d", &idade1);
    fflush (stdin);

    printf("Digite o tipo de ingresso, inteira ou meia:"); /*Pergunta o tipo de ingresso da pessoa sendo obrigatório responder com M para (Meia) I para (Inteira)*/
    scanf("%c", &ingressos1); // corrigir para aceitar só I e M 
    fflush (stdin);
}
///////////////////////////////////////////////////////////////////////////

    printf("Nome do filme:"); /*Nessa etapa pegaremos as informações da ultima sessão incluindo quantidade,sexo,idade,tipo de ingresso.*/
    fgets(filme2, 20,stdin);
    fflush (stdin);


    printf("\nQuantas pessoas assistiram ao filme?");/*Pergunta quantas pessoas assistiram ao filme e guarda esse valor.*/
    scanf("%d", &assistiram2);

while (assistiram1<=10){ /*Delimita para que o numero de pessoas que assistiram o filme não seja menor do que 10 pessoas*/
    printf("Numero Invalido!");

    printf("\nQuantas pessoas assistiram ao filme?");/*Pergunta quantas pessoas assistiram ao filme e guarda esse valor.*/
    scanf("%d", &assistiram2);
}

for(contador = 0; contador < assistiram1; contador++){//corrigir contador /*Utilizamos o FOR para perguntar as informações de cada  pessoa que assistiu o filme respectivamente*/
    fflush (stdin);

    printf("Digite o sexo da %d° pessoa:", contador +1);// corrigir para aceitar só f e m  /*Pergunta o sexo da pessoa sendo obrigatório responder com M para (Masculino) F para (Feminino)*/
    fflush (stdin);

    printf("Digite a idade");/*Pergunta a idade da pessoa*/
    scanf("%d", &idade2);
    fflush (stdin);

    printf("Digite o tipo de ingresso, inteira ou meia:"); /*Pergunta o tipo de ingresso da pessoa sendo obrigatório responder com M para (Meia) I para (Inteira)*/
    scanf("%c", &ingressos2); // corrigir para aceitar só i e m 
    fflush (stdin);
}


}