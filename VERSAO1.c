#include <stdio.h>
#include <math.h> //biblioteca matematica
#include <strings.h> //biblioteca de strings
#include <conio.h>
int main (){

    /* Para a delclaração das variáveis utilizamos Nomes significativos 
    encontrado no capitulo 2 do Livro ("Código Limpo").*/
    int quant_sessoes, sessao, assistiram, contador;
    int ingressos, ingressos2, cont_int1=0, cont_int2=0, cont_mei1=0, cont_mei2=0;// Variáveis dos ingressos, meia, inteira.
    float total,sessao1,sessao2;
    int criancaf=0, adolescentef=0, adultof=0, idosof=0 , criancam=0, adolescentem=0, adultom=0, idosom=0; // Variáveis de sexo e classificação de idade.
    int cont_fem=0, cont_masc=0;
    int idade;
    char sexo, filme[20];

    printf("Nome: Luiza Munis Nascimento\nMatricula: UC22201024\nCurso:Engenharia de software.");
    printf("\n\nNome: Ester Luiza Siqueira Correa Galati\nMatricula: UC22200640\nCurso:Ciencia da Computacao ");
    printf("\n\nNome: Cristiano Mundin Borges Junior \nMatricula: UC22200034\nCurso:Ciencia da Computacao ");
    /*Logo abaixo temos o começo do nosso código que pergunta o nome do filme e a quantidade de sessões.*/
    printf("\n\nBem Vindo, para melhor lhe atender informe:\n");
    printf("\nNome do filme:"); 
    fgets(filme, 20,stdin);
    fflush (stdin);

    printf("Digite a quantidades de sessoes:");
    scanf("%d", &quant_sessoes);   
    /*Criamos um while para delimitar o numero de sessões que o usuário pode digitar,
    neste caso é 2 se ele digitar outro numero repetiremos a pergunta.*/
while (quant_sessoes !=2){    
    printf("Quantidade de sessoes invalido, e aceito apenas duas sessoes.");
    printf("\nQuantidades de sessoes:");
    scanf("%d", &quant_sessoes);}
    fflush (stdin);
    /* Nesse caso perguntamos quantas pessoas assistiram ao filme, caso o usuário digite
    um valor menor que 10 repetiremos a pergunta.*/
    printf("Quantas pessoas assistiram ao filme?");  
    scanf("%d", &assistiram);
while(assistiram <10){   
    printf("Numero Invalido!Digite um numero maior que dez.");
    printf("\nQuantas pessoas assistiram ao filme?");  
    scanf("%d", &assistiram);}
    fflush (stdin);
    /*Utilizamos o FOR para que a pergunta do SEXO F ou M repita de acordo com
    quantidade de pessoas que assistiram o filme */
for(contador = 0; contador < assistiram; contador++){  

    printf("\nDigite o sexo da %d pessoa:", contador +1); 
    scanf("%c", &sexo);
    fflush (stdin);
    /*Utilizamos o WHILE para repetir a pergunta caso o usuário digite uma 
    letra diferente de F ou M */
while(sexo != 'F' && sexo != 'M' ){

    printf("invalido!Digite F para feminino e M para masculino.");
    printf("\nDigite o sexo da %d pessoa:", contador +1);
    scanf("%c", &sexo);
    fflush (stdin);}
    /*Utilizamos o IF para caso o usuário digite o sexo feminino parta para
    a próxima pergunta que seria a idade desta pessoa. */
if(sexo == 'F'){
cont_fem++;

    printf("Digite a idade da %d pessoa:", contador +1);
    scanf("%d", &idade);
    fflush (stdin);
    /*Logo abaixo utilizamos o WHILE para repetir a pergunta de idade caso o usuário
    digite um falor fora dos parametros, e o IF para classificar de acordo com a idade.*/ 
while(idade <=3 || idade >=100){
    printf("invalido!Digite um numero emtre 3 e 100.");
    printf("\nDigite a idade da %d pessoa:", contador +1);
    scanf("%d", &idade);
    fflush (stdin);}

 if (idade >=3 && idade <=13){
    criancaf++;}
     else if (idade >=14 && idade <=17){
      adolescentef++;}
         else if(idade >=18 && idade <=64){
          adultof++;}
             else  if (idade >=65 && idade <=100){
              idosof++;}}
    /*Utilizamos o ELSE IF para caso o usuário digite o sexo masculino parta para
    a próxima pergunta que seria a idade desta pessoa. */
 else if (sexo == 'M'){
 cont_masc++;
 
    printf("Digite a idade da %d pessoa:", contador +1);
    scanf("%d", &idade);
    fflush (stdin);
    /*Logo abaixo utilizamos o WHILE para repetir a pergunta de idade caso o usuário
    digite um falor fora dos parametros, e o IF para classificar de acordo com a idade.*/ 
while(idade <=3 || idade >=100){
    printf("invalido!Digite um numero emtre 3 e 100.");
    printf("\nDigite a idade da %d pessoa:", contador +1);
    scanf("%d", &idade);
    fflush (stdin);}

   if (idade >=3 && idade <=13){
    criancam++;}
     else if (idade >=14 && idade <=17){
     adolescentem++;}
         else if(idade >=18 && idade <=64){
          adultom++;}
             else  if (idade >=65 && idade <=100){
              idosom++;}
 }
    /*Nesse caso perguntamos se a pessoa assistiu a sessão 1 ou 2,
      Caso a pessoa coloque um numero diferente utilizamos o WHILE 
      para repetir a pergunta.*/
    printf("Qual sessao a %d pessoa assistiu:", contador +1);
    scanf("%d", &sessao); 
while ( sessao !=1 && sessao !=2){    
    printf("Invalido! Digite 1 ou 2");
    printf("\nQual sessao a %d pessoa assistiu:", contador +1);
    scanf("%d", &sessao);}
    fflush (stdin);

    /*Utilizamos o SWITCH para determinar o tipo de ingresso que a 
    pessoa comprou MEIA ou INTEIRA e o WHILE para repetir a pergunta
    caso ela digite um valor inválido.*/
switch (sessao){
    
case 1: 
    printf("Se a %d pessoa pagou inteira digite 1, se pagou meia digite 2:", contador+1); 
    scanf("%d", &ingressos);
    fflush (stdin);
while( ingressos != 1 && ingressos != 2){
    printf("Invalido!Digite 1 ou 2:");
    printf("Se a %d pessoa pagou inteira digite 1, se pagou meia digite 2:", contador+1); 
    scanf("%d", &ingressos);
    fflush (stdin);}


switch (ingressos){
case 1: cont_int1++;break;

case 2: cont_mei1++;break;}
break;

case 2:
    printf("Se a %d pessoa pagou inteira digite 1, se pagou meia digite 2:",contador+1); 
    scanf("%d", &ingressos2); 
    fflush (stdin);
while( ingressos2 != 1 && ingressos2 != 2){
    printf("Invalido!Digite 1 ou 2:");
    printf("\nSe a %d pessoa pagou inteira digite 1, se pagou meia digite 2:", contador+1); 
    scanf("%d", &ingressos2); 
    fflush (stdin);}

switch (ingressos2){
case 1: cont_int2++;break;
case 2: cont_mei2++;break;}
}

}
    /*Nesse caso fazemos a conta somando sempre 50 a quem pagou inteiro e 25 a
      quem pagou meia.*/
sessao1= (cont_int1*50)+(cont_mei1*25);
sessao2= (cont_int2*50)+(cont_mei2*25);
total = sessao1+ sessao2;
    /*Apresentamos o resultado ao usuário junto com as informações de IDADE, SEXO e 
    VALOR, que foram obtidos.*/
    printf("\n Resultado:\nFilme: %s", filme);
    printf ("Mulheres: %d pessoas.\nHomens: %d pessoas.", cont_fem, cont_masc);
    printf ("\nClassificacao por idade: \nCriancas %d\nAdolescente %d\nAdulto %d \nIdoso %d", criancaf+ criancam, adolescentef+adolescentem,adultof+adultom, idosof+idosom);
    printf("\nMulheres maior de idade: %d", adultof+idosof);
    printf("\nHomens maior de idade: %d", adultom+idosom);
    printf("\nValor arrecadado na primeira sessao: %.2f", sessao1);
    printf("\nValor arrecadado na segunda sessao: %.2f", sessao2);
    printf("\nValor arrecadado em ambas sessao: %.2f", total);
    /*Utilizamos o IF e o ELSE IF para determinar se houve mais pagamentos de meias 
    ou inteiras.*/
if (cont_int1 + cont_int2 >cont_mei1 + cont_mei2){
    printf("\nHouve mais pagamento de inteiras");}
    else if (cont_int1 + cont_int2 < cont_mei1 + cont_mei2){
        printf("\nHouve mais pagamento de meias");}
         else if(cont_int1 + cont_int2 == cont_mei1 + cont_mei2){
            printf("\nHouve a mesma quantidade de inteiras e meias pagas");
    /*Utilizamos o capitulo 5 do Livro ("Código Limpo") para a formatação do código inteiro*/

        }
        
}


