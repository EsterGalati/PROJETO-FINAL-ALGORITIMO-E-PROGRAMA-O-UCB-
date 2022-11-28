#include <stdio.h>
#include<math.h>
int main(){

int ingressos,ingressos2, contador, assistiram, sessao;
int cont_int1=0, cont_int2=0, cont_mei1=0, cont_mei2=0, total,sessao1,sessao2;

printf("\nQuantas pessoas assistiram ao filme?"); /*Pergunta quantas pessoas assistiram ao filme e guarda esse valor.*/
    scanf("%d", &assistiram);

for(contador = 0; contador < assistiram; contador++){

printf("Qual sessao a %d pessoa assistiu:", contador +1);
scanf("%d", &sessao); 
while ( sessao !=1 && sessao !=2){    
printf("Invalido! Digite 1 ou 2");
printf("\nQual sessao a %d pessoa assistiu:", contador +1);
scanf("%d", &sessao);}
fflush (stdin);

switch (sessao){
case 1: 
printf("Se a %d pessoa pagou inteira digite 1, se Spagou meia digite 2:", contador+1); 
scanf("%d", &ingressos);
fflush (stdin);break;
while( ingressos != 1 && ingressos != 2){
printf("Invalido!Digite 1 ou 2:");
printf("\nSe a %d pessoa pagou inteira digite 1, se pagou meia digite 2:",contador+1);
fflush (stdin);}


switch (ingressos){
case 1: cont_int1++;break;

case 2: cont_mei1++;break;}

case 2:
printf("Se a %d pessoa pagou inteira digite 1, se pagou meia digite 2:",contador+1); 
scanf("%d", &ingressos2); 
fflush (stdin);break;
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

sessao1= (cont_int1*50)+(cont_mei1*25);
sessao2= (cont_int2*50)+(cont_mei2*25);
total = sessao1+ sessao2;

printf("\nValor arrecadado na primeira sessao: %d", sessao1);
printf("\nValor arrecadado na segunda sessao: %d", sessao2);
printf("\nValor arrecadado em ambas sessao: %d", total);

}
