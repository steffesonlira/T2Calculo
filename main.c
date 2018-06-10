#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include "Derivadas.h"
#include "Integral.h"
#include "Zero.h"

int main()
{
    maintest(); //uso para testesintegral
    maintestdois(); //teste zero
    setlocale(LC_ALL, "Portuguese");

    char op,opf;
    double k,x;// variáveis usadas na opção Derivadas
    double a,b; //variáveis usadas na opção Integral
    double x0; //Variável usada na opção Zero da Função
    double result;
    double resultzero;
    char final;
    
 do{
 do{
 do{    
    printf(" Escolha uma das opções abaixo: ");
    printf("\n 1 - Derivadas");
    printf("\n 2 - Integral");
    printf("\n 3 - Zero da função.");
    printf("\n 4 - Sair\n");
    printf(" ");
        scanf("%c", &op);
            system("cls");
    fflush(stdin);
    if (isalpha(op)){
        printf("Você entrou com uma letra, por favor selecione um número");
    }
                if (op==4){exit(0);}
 }while(isalpha(op));

  do{
    printf("\n Escolha a Função abaixo: ");
    printf("\n 1 - f(x) = k");
    printf("\n 2 - f(x) = x^k");
    printf("\n 3 - f(x) = k^x");
    printf("\n 4 - f(x) = e^x");
    printf("\n 5 - f(x) = logk(x)");
    printf("\n 6 - f(x) = ln(x)");
    printf("\n 7 - f(x) = sen(x)");
    printf("\n 8 - f(x) = cos(x)");
    printf("\n 9 - f(x) = tg(x)");
    printf("\n 10 - f(x) = sqrt(x)");
    printf("\n 11 - f(x) = 1/x");
    printf("\n12 - Voltar ao menu opções.");
    printf("\n13 - Sair.");
    printf("\n ");
        scanf("%c", &opf);
            system("cls");
                if (opf==13){exit(0);}
                    
 }while (opf==12);
  fflush(stdin);
    if (isalpha(opf)){
        printf("Você entrou com uma letra, por favor selecione um número");
    }
                
 }while(isalpha(opf));  
     
     
     
    if(op==1){
        printf("\n Digite o valor de X:\n ");
            scanf("%f", &x); 
   
    if(opf==1 || opf==2 || opf==3 || opf==5){
        printf("\n Digite o valor de K:\n ");
            scanf("%f", &k);}
        
    if(opf==1){
        x = 0;
    
    result = Derivada(x,opf,k);
    printf("\n Derivada = %f \n", result);
    }}
    
    if(op==2){
        printf("\n Digite o valor de A:\n ");
            scanf("%f", &a);
        printf(" Digite o valor de B:\n ");
            scanf("%f", &b);
        
        if(opf==1 || opf==2 || opf==3 || opf==5){
            printf("\n Digite o valor de K:\n ");
                scanf("%f", &k);}
        result = Integral(opf, k, a, b);
            printf("\n Integral = %f\n", result);
    }
    
    if(op==3){
        printf(" Digite o valor de X0 in R:\n ");
            scanf("%f", &x0);
        
        printf(" Escolha a Função abaixo:\n");
        printf("\n 1 - f(x) = x^2 - 2");
        printf("\n 2 - f(x) = 2x - cos(x)");
        printf("\n 3 - f(x) = x . ln(x) - 1\n");
            scanf("%d", &opf);

    resultzero = Zero(x0,opf);
    printf("\n Solução = %f", resultzero[1] );
    printf("\n Erro = %f", resultzero[0]);
    }
    printf("Deseja efetuar outro calculo?\n");
    printf("S - Voltar ao menu");
    printf("N - Sair");
    final = getchar();
  }while(final=='S');

    return 0;
}
