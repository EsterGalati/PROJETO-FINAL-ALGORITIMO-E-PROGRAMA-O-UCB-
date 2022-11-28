#include <stdio.h>
#include <math.h> //biblioteca matematica
#include <strings.h> //biblioteca de strings
int main (){
    int quant_sessoes, sessao,idade, assistiram,contador;
    int cont_int1,cont_mei1,cont_int2,cont_mei2, ingressos;
    char sexo, filme[20];

//colocar o cabecario

printf("\n\nBem Vindo, para melhor lhe atender informe:\n");
printf("\nNome do filme:"); 
fgets(filme, 20,stdin);
fflush (stdin);

printf("Digite a quantidades de sessoes:");
scanf("%d", &quant_sessoes);   
while (quant_sessoes !=2){    
printf("Quantidade de sessoes invalido, e aceito apenas duas sessoes.");
printf("\nQuantidades de sessoes:");
scanf("%d", &quant_sessoes);}
fflush (stdin);

printf("\nQuantas pessoas assistiram ao filme?");  
scanf("%d", &assistiram);
while(assistiram<=10){   
printf("Numero Invalido!Digite um numero maior que dez.");
printf("\nQuantas pessoas assistiram ao filme?");  
scanf("%d", &assistiram);}
 fflush (stdin);

for(contador = 0; contador < assistiram; contador++){  

printf("\nDigite o sexo da %d pessoa:", contador +1);   
fflush (stdin);
while(sexo != 'F' && sexo != 'M' ){
printf("invalido!Digite F para feminino e M para masculino.");
printf("\nDigite o sexo da %d pessoa:", contador +1);  
scanf("%c", &sexo);
fflush (stdin);}

printf("Digite a idade da %d pessoa:", contador +1);
scanf("%d", &idade);
fflush (stdin);
while(idade <=3 || idade >=100){
printf("invalido!Digite um numero emtre 3 e 100.");
printf("\nDigite a idade da %d pessoa:", contador +1);
scanf("%d", &idade);
fflush (stdin);}

printf("Qual sessao a %d pessoa assistiu:", contador +1);
scanf("%d", &sessao); 
while ( sessao !=1 && sessao !=2){    
printf("Invalido! Digite 1 ou 2");
printf("\nQual sessao a %d pessoa assistiu:", contador +1);
scanf("%d", &sessao);}
fflush (stdin);

switch (sessao){
case 1: 
printf("Se a %d pessoa pagou inteira digite 1, se pagou meia digite 2:", contador+1); 
scanf("%d", &ingressos);
fflush (stdin);break;
while( ingressos != 1 && ingressos != 2){
printf("Invalido!Digite 1 ou 2:");
printf("\nSe a %d pessoa pagou inteira digite 1, se pagou meia digite 2:",contador+1);
fflush (stdin);break;}


switch (ingressos){
case 1: cont_int1++;break;
case 2: cont_mei1++;break;}

case 2:
printf("Se a %d pessoa pagou inteira digite 1, se pagou meia digite 2:",contador+1); 
scanf("%d", &ingressos); 
fflush (stdin);break;
while( ingressos != 1 && ingressos != 2){
printf("Invalido!Digite 1 ou 2:");
printf("\nSe a %d pessoa pagou inteira digite 1, se pagou meia digite 2:", contador+1); /*Pergunta o tipo de ingresso da pessoa sendo obrigatório responder com M para (Meia) I para (Inteira)*/
scanf("%d", &ingressos); 
fflush (stdin);break;}

switch (ingressos){
case 1: cont_int2++;break;
case 2: cont_mei2++;break;}
}

}
}