#include <stdio.h>
#include <math.h> //biblioteca matematica
#include <strings.h> //biblioteca de strings
int main (){

    int sessoes, idade1, assistiram1, contador; //variaveis
    char filme1[20];//variaveis
    char sexo1, ingressos1; //O sexo será dado em F ou M. O ingresso será dado como  meia ou inteira respectivamente M ou I


    printf("Nome: Luiza Munis Nascimento\nMatricula: UC22201024\nCurso:Engenharia de software.");
    printf("\n\nNome: Ester Luiza Siqueira Correa Galati\nMatricula: UC22200640\nCurso:Ciencia da Computacao ");
    printf("\n\nNome: Cristiano Mundin Borges Junior \nMatricula: UC22200034\nCurso:Ciencia da Computacao ");


    printf("Bem Vindo, para melhor lhe atender informe:\n");
    printf("\n\nA quantidade de sessoes:");
    scanf("%d", &sessoes);// Pergunta quantas sessões tem ao usuário.

while (sessoes !=2){//Esse While serve para delimitar a quantidade de sessões para apenas 2, e repetir a pergunta, caso o usuario coloque um valor diferente.

    printf("Numero invalido!");

    printf("\n\nDigite a quantidade de sessoes:");
    scanf("%d", &sessoes);
}
    fflush (stdin);

    printf("Por favor, digite o nome do filme:"); /*Nessa etapa iremos dividir as informações de cada sessão,incluindo suas respectivas informações incluindo quantidade, sexo, idade e tipo de ingresso.*/
    fgets(filme1, 20,stdin);
    fflush (stdin);

    printf("\nPedimos encarecidamente que informe quantas pessoas assistiram ao filme?\n"); /*Pergunta quantas pessoas assistiram ao filme e guarda esse valor.*/
    scanf("%d", &assistiram1);

while (assistiram1<=10){ /*Delimita para que o numero de pessoas que assistiram o filme não seja menor do que 10 pessoas*/
    printf("Numero Invalido!");

    printf("\nPedimos encarecidamente que informe quantas pessoas assistiram ao filme?\n");/*Pergunta quantas pessoas assistiram ao filme e guarda esse valor.*/
    scanf("%d", &assistiram1);
}

for(contador = 0; contador < assistiram1; contador++){//*Utilizamos o FOR para perguntar as informações de cada  pessoa que assistiu o filme respectivamente*/
    fflush (stdin);
//////////////////////////////////////////////////////////////////

    printf("Por favor, digite o sexo da %d pessoa utilizando F para (FEMININO) e M para(MASCULINO):\n", contador +1);/*Pergunta o sexo da pessoa sendo obrigatório responder com M para (Masculino) F para (Feminino)*/
    scanf("%c", &sexo1);
    fflush (stdin);

   while(sexo1 != 'F' && sexo1 != 'M' ){
   
    printf("invalido");

    printf("Por favor, digite o sexo da %d pessoa utilizando F para (FEMININO) e M para(MASCULINO):\n", contador +1);/*Pergunta o sexo da pessoa sendo obrigatório responder com M para (Masculino) F para (Feminino)*/
    scanf("%c", &sexo1);
    fflush (stdin);}
///////////////////////////////////////////////////////////////////////////////


    printf("Por favor, digite a idade da %d pessoa:\n", contador +1);
    scanf("%d", &idade1);
    fflush (stdin);

    while(idade1 <3 || idade1 >100){

    printf("invalido");

    printf("\nPor favor, digite a idade da %d pessoa:\n", contador +1);
    scanf("%d", &idade1);
    fflush (stdin);}

 /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


    printf("Por favor,digite o tipo de ingresso utilizando I para (INTEIRA) ou M para (MEIA):\n"); /*Pergunta o tipo de ingresso da pessoa sendo obrigatório responder com M para (Meia) I para (Inteira)*/
    scanf("%c", &ingressos1);  
    fflush (stdin);

while(ingressos1 != 'I' && ingressos1 !='M'){
    printf("invalido");

    
    printf("\nPor favor,digite o tipo de ingresso utilizando I para (INTEIRA) ou M para (MEIA):\n"); /*Pergunta o tipo de ingresso da pessoa sendo obrigatório responder com M para (Meia) I para (Inteira)*/
    scanf("%c", &ingressos1); 
    fflush (stdin);

}
  
}
}
