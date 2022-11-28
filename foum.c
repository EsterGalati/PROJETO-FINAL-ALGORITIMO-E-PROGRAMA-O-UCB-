#include <stdio.h>
#include<math.h>
int main(){

char sexo;
int contador, assistiram, idade;
int criancaf=0, adolescentef=0, adultof=0, idosof=0 , criancam=0, adolescentem=0, adultom=0, idosom=0;
int cont_fem=0, cont_masc=0;

printf("\nQuantas pessoas assistiram ao filme?"); /*Pergunta quantas pessoas assistiram ao filme e guarda esse valor.*/
scanf("%d", &assistiram);
fflush (stdin);

for(contador = 0; contador < assistiram; contador++){

printf("\nDigite o sexo da %d pessoa:", contador +1); 
scanf("%c", &sexo);
fflush (stdin);
while(sexo != 'F' && sexo != 'M' ){
printf("invalido!Digite F para feminino e M para masculino.");
printf("\nDigite o sexo da %d pessoa:", contador +1);
scanf("%c", &sexo);
fflush (stdin);}

if(sexo == 'F'){
cont_fem++;

printf("Digite a idade da %d pessoa:", contador +1);
scanf("%d", &idade);
fflush (stdin);
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

 else if (sexo == 'M'){
 cont_masc++;
 
 printf("Digite a idade da %d pessoa:", contador +1);
scanf("%d", &idade);
fflush (stdin);
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
 

}

printf("\nSexo feminino %d", cont_fem);
printf("\nSexo masculino %d", cont_masc);
printf ("\nMulheres \n Criancas %d \n adolescente %d\n adulto %d \n idoso %d", criancaf, adolescentef, adultof, idosof);
printf ("\n \n Homens \nCriancas %d \n adolescente %d\n adulto %d \n idoso %d", criancam, adolescentem, adultom, idosom);
}