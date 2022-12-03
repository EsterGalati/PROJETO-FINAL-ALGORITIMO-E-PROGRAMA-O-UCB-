#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>


int entrada(){
    printf ("*************************************\n");
    printf ("****          Bem Vindo          ****\n");
    printf ("****              a              ****\n");
    printf ("****          Pipoca Super       ****\n");
    printf ("*************************************\n");
    }

 int menu(){
    int op;
    printf (" \nCardápio \n\n");
    printf ("1 - Pipoca. \n");
    printf ("2 - Bebidas. \n");
    printf ("3 - Finalizar o pedido.\n");
    printf ("Digite a opção desejada: \n");
    scanf("%d", &op);

    printf ("\n");
    
    return op;
}

int controladorpipoca (int op) {
int oppipoca;

    printf ("\n1 - Pipoca Salgada - 18,00 R$ \n");
    printf ("2 - Pipoca de Chocolate  - 18,00 R$ \n");
    printf ("3 - Pipoca de Caramelo - 18,00 R$ \n");
    printf ("4 - Pipoca Mista Chocomelo - 22,00 R$ \n");
    printf ("5 - Pipoca Mista Salgada e Doce- 22,00 R$ \n");
    printf ("Digite a opção desejada: \n");
    scanf ("%d", &oppipoca);

    switch (oppipoca){
      case 1:
          printf ("\nVocê adicionou Pipoca Salgada a sua bandeja!\n");
          break;
      case 2:
          printf ("\nVocê adicionou Pipoca de Chocolate a sua bandeja!\n");

          break;
      case 3:
          printf ("\nVocê adicionou Pipoca de Caramelo a sua bandeja!\n");

          break;
      case 4:
          printf ("\nVocê adicionou Pipoca Mista Chocomelo a sua bandeja!\n");

          break;

      case 5:
          printf ("\nVocê adicionou Pipoca Mista Salgada e Doce a sua bandeja!\n");

          break;

      default:
        printf ("\nValor incorreto, tente novamente\n");

    break;}
return oppipoca;
}
int controladorabebida (int op) {
int opbebida;
char str [10];

    printf ("\n1 - Suco - 5,00 R$ \n");
    printf ("2 - Refrigerante Lata - 4,00 R$\n");
    printf ("3 - Refrigerante 2L - 13,00 R$\n");
    printf ("Digite a opção desejada: \n");
    scanf ("%d", &opbebida);

    switch (opbebida){
    case 1:
    printf ("\nInforme o sabor do suco: \n");
    scanf ("%s", &str);
    printf ("\nVocê adicionou suco de %s a sua bandeja!\n", str);


    break;

    case 2:
    printf ("\nInforme o refrigerante lata: ");
    scanf ("%s", &str);
    printf ("\nVocê adicionou %s lata a sua bandeja!\n", str);

    break;

    case 3:
    printf ("\nInforme o refrigerante 2 Litros: ");
    scanf ("%s", &str);
    printf ("\nVocê adicionou %s 2 Litros a sua bandeja!\n", str);

    break;

    default:
    printf ("\nComando incorreto, tente novamente\n");
    break;}

    return opbebida;

}

int somapipoca (int oppipoca){
int precopipoca;

 switch (oppipoca){
      case 1:
          precopipoca = 18;
          break;
      case 2:
          precopipoca = 18;

          break;
      case 3:
          precopipoca = 18;

          break;
      case 4:
          precopipoca = 22;

          break;

      case 5:
          precopipoca = 22;

          break;}
          return precopipoca;
          }


int somabebida (int opbebida){
int precobebida;

 switch (opbebida){
      case 1:
          precobebida = 5;
          break;
      case 2:
          precobebida = 4;

          break;
      case 3:
          precobebida = 13;

          break;
    }
          return precobebida;
          }



/// @brief 
/// @return 
int main(){
    setlocale(LC_ALL,"");
    int op,oppipoca,opbebida;
    float tpiz = 0;
    float tbeb = 0;
    float totalpedido;
    int precopipoca,precobebida;
    entrada();
    do{
        op = menu();
        switch(op){
        case 1:
         oppipoca =  controladorpipoca(oppipoca);
         precopipoca = somapipoca(oppipoca);
         tpiz = precopipoca + tpiz;
            break;
        case 2:
        opbebida = controladorabebida(opbebida);
        precobebida = somabebida(opbebida); 
        tbeb = precobebida + tbeb;

        break;
        }

    }while(op != 3 );
    totalpedido = tpiz+tbeb;
    printf ("O valor total de seu pedido é: %.2f", totalpedido);
    printf("\n\n\n");
    return 0;}