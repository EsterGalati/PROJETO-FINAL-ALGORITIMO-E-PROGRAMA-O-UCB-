#include <stdio.h>
#include <math.h> //biblioteca matematica
#include <strings.h> //biblioteca de strings
int main (){

    int lanche, assistiram, contador;
    int menu_pipoca;
    float pipoca_din=0, pip_sal=0,pip_choc=0, pip_car=0, pip_chocomelo=0, pip_ds=0;
    int quant_pipoca=0;

    printf("\nQuantas pessoas assistiram ao filme?");
    scanf("%d", &assistiram);

for(contador = 0; contador < assistiram; contador++){

printf("A %d pessoa comprou pipoca ou bebida? Digite 1 para sim e 2 para nao.", contador+1);
scanf("%d", &lanche);
while ( lanche !=1 && lanche !=2){
printf("Invalido! Digite 1 ou 2");
printf("A %d pessoa comprou pipoca? Digite 1 para sim e 2 para nao.", contador+1);
scanf("%d", &lanche);
fflush (stdin);}



if (lanche ==1){
    quant_pipoca++;

    printf (" \nCardapio \n\n");
    printf ("1 - Pipoca Salgada - 18,00 R$ \n");
    printf ("2 - Pipoca de Chocolate  - 18,00 R$ \n");
    printf ("3 - Pipoca de Caramelo - 18,00 R$ \n");
    printf ("4 - Pipoca Mista Chocomelo - 22,00 R$ \n");
    printf ("5 - Pipoca Mista Salgada e Doce- 22,00 R$ \n");
    printf ("Digite a opcoo desejada: \n");
    scanf ("%d", &menu_pipoca);

    switch (menu_pipoca){
    case 1:
          printf ("\nAdicionou Pipoca Salgada a sua bandeja!\n");break;
    case 2:
          printf ("\nAdicionou Pipoca de Chocolate a sua bandeja!\n");break;
    case 3:
          printf ("\nAdicionou Pipoca de Caramelo a sua bandeja!\n");break;
    case 4:
          printf ("\nAdicionou Pipoca Mista Chocomelo a sua bandeja!\n");break;
    case 5:
          printf ("\nAdicionou Pipoca Mista Salgada e Doce a sua bandeja!\n");break;}

while (menu_pipoca !=1 && menu_pipoca !=2 && menu_pipoca !=3 && menu_pipoca !=4 && menu_pipoca !=5){
printf (" \nCardapio \n\n");
    printf ("1 - Pipoca Salgada - 18,00 R$ \n");
    printf ("2 - Pipoca de Chocolate  - 18,00 R$ \n");
    printf ("3 - Pipoca de Caramelo - 18,00 R$ \n");
    printf ("4 - Pipoca Mista Chocomelo - 22,00 R$ \n");
    printf ("5 - Pipoca Mista Salgada e Doce- 22,00 R$ \n");
    printf ("Digite a opcoo desejada: \n");
    scanf ("%d", &menu_pipoca);

    switch (menu_pipoca){
    case 1:
          printf ("\nAdicionou Pipoca Salgada a sua bandeja!\n");break;
    case 2:
          printf ("\nAdicionou Pipoca de Chocolate a sua bandeja!\n");break;
    case 3:
          printf ("\nAdicionou Pipoca de Caramelo a sua bandeja!\n");break;
    case 4:
          printf ("\nAdicionou Pipoca Mista Chocomelo a sua bandeja!\n");break;
    case 5:
          printf ("\nAdicionou Pipoca Mista Salgada e Doce a sua bandeja!\n");break;}}


switch (menu_pipoca){

case 1: pip_sal++;break;
case 2: pip_choc++;break;
case 3:pip_car++;break;
case 4: pip_chocomelo++;break;
case 5: pip_ds++;break;
}    
}}
        
     pipoca_din = (pip_sal*18)+ (pip_choc*18)+ (pip_car*18)+ (pip_chocomelo*22)+(pip_ds*22);

    printf("Quantidade de pessoas que compraram pipoca: %d", quant_pipoca);
    printf("\nDinheiro pipoca:%.2f", pipoca_din);

}
