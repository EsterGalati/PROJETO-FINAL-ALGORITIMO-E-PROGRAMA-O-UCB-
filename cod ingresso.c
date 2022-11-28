#include <stdio.h>
#include<math.h>
int main(){

int ingressos1, contador, assistiram1;
float cont_int =0, cont_mei=0, valor_arrecadado1;

printf("\nQuantas pessoas assistiram ao filme?"); 
    scanf("%d", &assistiram1);

for(contador = 0; contador < assistiram1; contador++){

printf("\nDigite 1 para inteira e 2 para meia:"); 
 scanf("%d", &ingressos1);
    fflush (stdin);

while( ingressos1 != 1 && ingressos1 != 2){
    printf("Invalido!");

    printf("\n aperte 1 para inteira e 2 para meia:"); 
    scanf("%d", &ingressos1);
    fflush (stdin);}

switch (ingressos1)
{
case 1: cont_int++;break;
case 2: cont_mei++;break;
}
}
valor_arrecadado1= (cont_int*50)+(cont_mei*25);
printf("\nValor arrecadado na primeira sessao: %.2f", valor_arrecadado1);
if (cont_int>cont_mei){
    printf("\nHouve mais pagamento de inteiras");}
    else if (cont_int<cont_mei){
        printf("\nHouve mais pagamento de meias");}
        else if(cont_int==cont_mei){
            printf("\nHouve a mesma quantidade de inteiras e meias pagas");
        }
        
}
