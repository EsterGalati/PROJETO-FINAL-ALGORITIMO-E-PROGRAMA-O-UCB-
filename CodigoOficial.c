#include <stdio.h>
#include <math.h> //biblioteca matematica
#include <strings.h> //biblioteca de strings
int main (){

    int quant_sessoes, sessao, assistiram, contador;
    int ingressos, ingressos2, cont_int1=0, cont_int2=0, cont_mei1=0, cont_mei2=0;// variáveis dos ingressos, meia, inteira.
    float total,sessao1,sessao2;
    int criancaf=0, adolescentef=0, adultof=0, idosof=0 , criancam=0, adolescentem=0, adultom=0, idosom=0; // variáveis de sexo e classificação de idade.
    int cont_fem=0, cont_masc=0;
    int idade;
    char sexo, filme[20];

printf("Nome: Luiza Munis Nascimento\nMatricula: UC22201024\nCurso:Engenharia de software.");
printf("\n\nNome: Ester Luiza Siqueira Correa Galati\nMatricula: UC22200640\nCurso:Ciencia da Computacao ");
printf("\n\nNome: Cristiano Mundin Borges Junior \nMatricula: UC22200034\nCurso:Ciencia da Computacao ");

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

printf("Quantas pessoas assistiram ao filme?");  
scanf("%d", &assistiram);
while(assistiram <2){   
printf("Numero Invalido!Digite um numero maior que dez.");
printf("\nQuantas pessoas assistiram ao filme?");  
scanf("%d", &assistiram);}
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

sessao1= (cont_int1*50)+(cont_mei1*25);
sessao2= (cont_int2*50)+(cont_mei2*25);
total = sessao1+ sessao2;

printf("\n Resultado:\nFilme: %s", filme);
printf ("Mulheres: %d pessoas.\nHomens: %d pessoas.", cont_fem, cont_masc);
printf ("\nClassificacao por idade: \nCriancas %d\nAdolescente %d\nAdulto %d \nIdoso %d", criancaf+ criancam, adolescentef+adolescentem,adultof+adultom, idosof+idosom);
printf("\nMulheres maior de idade: %d", adultof+idosof);
printf("\nHomens maior de idade: %d", adultom+idosom);
printf("\nValor arrecadado na primeira sessao: %.2f", sessao1);
printf("\nValor arrecadado na segunda sessao: %.2f", sessao2);
printf("\nValor arrecadado em ambas sessao: %.2f", total);

if (cont_int1 + cont_int2 >cont_mei1 + cont_mei2){
    printf("\nHouve mais pagamento de inteiras");}
    else if (cont_int1 + cont_int2 < cont_mei1 + cont_mei2){
        printf("\nHouve mais pagamento de meias");}
         else if(cont_int1 + cont_int2 == cont_mei1 + cont_mei2){
            printf("\nHouve a mesma quantidade de inteiras e meias pagas");
        }
        
}