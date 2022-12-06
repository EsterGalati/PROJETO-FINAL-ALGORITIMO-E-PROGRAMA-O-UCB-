#include <stdio.h>
#include <math.h> //biblioteca matematica
#include <strings.h> //biblioteca de strings
int main (){

    /* Para a delclaração das variáveis utilizamos Nomes significativos 
    encontrado no capitulo 2 do Livro ("Código Limpo").*/
    int quant_sessoes, sessao, assistiram, contador;
    int ingressos, ingressos2, cont_int1=0, cont_int2=0, cont_mei1=0, cont_mei2=0;// Variáveis dos ingressos, meia, inteira.
    float total,sessao1,sessao2;
    int criancaf=0, adolescentef=0, adultof=0, idosof=0 , criancam=0, adolescentem=0, adultom=0, idosom=0; // Variáveis de sexo e classificação de idade.
    int cont_fem=0, cont_masc=0;
    int idade;
    char sexo, filme[100];
    int menu_pipoca; // variaveis menu de pipoca
    float pipoca_din=0, pip_sal=0,pip_choc=0, pip_car=0, pip_chocomelo=0, pip_ds=0;
    int quant_pipoca=0, lanche;

    printf("Nome: Luiza Munis Nascimento\nMatricula: UC22201024\nCurso:Engenharia de software.");
    printf("\n\nNome: Ester Luiza Siqueira Correa Galati\nMatricula: UC22200640\nCurso:Ciencia da Computacao ");
    printf("\n\nNome: Cristiano Mundin Borges Junior \nMatricula: UC22200034\nCurso:Ciencia da Computacao ");


    /*Logo abaixo temos o começo do nosso código que pergunta o nome do filme e a quantidade de sessões.*/
    printf("\n\nBem Vindo, para melhor lhe atender informe:\n");
    printf("\nNome do filme:"); 
    fgets(filme, 100,stdin);
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
case 1: cont_int1++;break; //Contador dos ingressos inteiros

case 2: cont_mei1++;break;} // contador ingressos meia
break;// parada do case

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

printf("A %d pessoa comprou pipoca? Digite 1 para sim e 2 para nao:", contador+1);// Nova funcionalidade
scanf("%d", &lanche);
fflush (stdin);
while ( lanche !=1 && lanche !=2){
printf("Invalido! Digite 1 ou 2");
printf("A %d pessoa comprou pipoca? Digite 1 para sim e 2 para nao:", contador+1);
scanf("%d", &lanche);
fflush (stdin);}

if (lanche ==1){ //MENU DE CARDAPIO
    quant_pipoca++;

    printf (" \nCardapio \n\n");
    printf ("1 - Pipoca Salgada - 18,00 R$ \n");
    printf ("2 - Pipoca de Chocolate  - 18,00 R$ \n");
    printf ("3 - Pipoca de Caramelo - 18,00 R$ \n");
    printf ("4 - Pipoca Mista Chocomelo - 22,00 R$ \n");
    printf ("5 - Pipoca Mista Salgada e Doce- 22,00 R$ \n");
    printf ("Digite a opcao desejada: \n");
    scanf ("%d", &menu_pipoca);
    fflush (stdin);

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

while (menu_pipoca !=1 && menu_pipoca !=2 && menu_pipoca !=3 && menu_pipoca !=4 && menu_pipoca !=5){ //LAÇO CASO A PESSOA ESCOLHA UM NÃO VALIDO
    printf (" \nCardapio \n\n");
    printf ("1 - Pipoca Salgada - 18,00 R$ \n");
    printf ("2 - Pipoca de Chocolate  - 18,00 R$ \n");
    printf ("3 - Pipoca de Caramelo - 18,00 R$ \n");
    printf ("4 - Pipoca Mista Chocomelo - 22,00 R$ \n");
    printf ("5 - Pipoca Mista Salgada e Doce- 22,00 R$ \n");
    printf ("Digite a opcao desejada: \n");
    scanf ("%d", &menu_pipoca);
    fflush (stdin);

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


switch (menu_pipoca){ // contadores para armazenar o sabor da pipoca

case 1: pip_sal++;break;
case 2: pip_choc++;break;
case 3:pip_car++;break;
case 4: pip_chocomelo++;break;
case 5: pip_ds++;break;}    
}
}

    /*Nesse caso fazemos a conta somando sempre 50 a quem pagou inteiro e 25 a
      quem pagou meia.*/
sessao1= (cont_int1*50)+(cont_mei1*25);
sessao2= (cont_int2*50)+(cont_mei2*25);
total = sessao1+ sessao2;

 pipoca_din = (pip_sal*18)+ (pip_choc*18)+ (pip_car*18)+ (pip_chocomelo*22)+(pip_ds*22); // soma dos valores arrecadados da pipoca.
    /*Apresentamos o resultado ao usuário junto com as informações de IDADE, SEXO e 
    VALOR, que foram obtidos.*/
    
    printf("\n Resultado:\nFilme: %s", filme);
    printf ("\nMulheres: %d pessoas.\nHomens: %d pessoas.", cont_fem, cont_masc);
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
    /*Utilizamos o capitulo 5 do Livro ("Código Limpo") para a formatação do código inteiro*/}
    printf("\nQuantidade de pessoas que compraram pipoca: %d", quant_pipoca);
    printf("\nDinheiro pipoca:%.2f", pipoca_din);
}