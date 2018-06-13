#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <ctype.h> //biblioteca adicionada para nao aceitar letras.
#include "Derivadas.h"
#include "Integral.h"
#include "Zero.h"


int main()
{
    //maintest(); //uso para testesintegral
    //maintestdois(); //teste zero
    setlocale(LC_ALL, "Portuguese");

    char op;
    char opf;
    double k,x;// variáveis usadas na opção Derivadas
    double a,b; //variáveis usadas na opção Integral
    double x0; //Variável usada na opção Zero da Função
    double  result;
    double  *resultzero;
    char final;

 do{
 do{
 do{

    printf("\n Escolha uma das opções abaixo: ");
    printf("\n 1 - Derivadas");
    printf("\n 2 - Integral");
    printf("\n 3 - Zero da função.");
    printf("\n 4 - Sair\n");
    printf("\nEscolha a opcao: ");
        scanf(" %c",&op);
            system("cls");
            fflush(stdin);

        if (isalpha(op))

        {

            printf("\nVocê entrou com uma letra, por favor selecione um número\n");

        }

                    {
                        if (op == '4') {exit(0);};
                    }

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
    printf("\n 12 - Voltar ao menu opções.");
    printf("\n 13 - Sair.");
    printf("\n ");
    printf("\nEscolha sua opcao: ");
        scanf("%c", &opf);
            system("cls");
            fflush(stdin);
                if (opf == '13'){exit(0);}


 }while (opf == '12');

        if (isalpha(opf))
        {

        printf("Você entrou com uma letra, por favor selecione um número");

        }

 }while(isalpha(opf));


{

        if(op == '1')
    {
        printf("\n Digite o valor de X:\n ");
            scanf("%lf", &x);
        fflush(stdin);
    }

        if(opf == '1' && opf == '2' && opf == '3' && opf == '5')
        {
        printf("\n Digite o valor de K:\n ");
            scanf("% lf", &k);
        fflush(stdin);
        }

    if(opf == '1')
        {
            x = 0;

            result = Derivada(x,opf,k);
            printf("\n Derivada = %lf \n", result);
        }


        if(opf == '2')
        {

            result = Derivada(x,opf,k);
            printf("\n Derivada = %lf \n", result);
        }


        if(opf == '3')
        {
            //x = 0;

            result = Derivada(x,opf,k);
            printf("\n Derivada = %.2lf \n", result);
        }


        if(opf == '4')
        {

            result = Derivada(x,opf,k);
            printf("\n Derivada = %lf \n", result);
        }


        if(opf == '5')
        {

            result = Derivada(x,opf,k);
            printf("\n Derivada = %lf \n", result);
        }


        if(opf == '6')
        {

            result = Derivada(x,opf,k);
            printf("\n Derivada = %lf \n", result);
        }


        if(opf == '7')
        {

            result = Derivada(x,opf,k);
            printf("\n Derivada = %lf \n", result);
        }


        if(opf == '8')
        {

            result = Derivada(x,opf,k);
            printf("\n Derivada = %lf \n", result);
        }



        if(opf == '9')
        {

            result = Derivada(x,opf,k);
            printf("\n Derivada = %lf \n", result);
        }



        if(opf == '10')
        {

            result = Derivada(x,opf,k);
            printf("\n Derivada = %lf \n", result);
        }



        if(opf == '11')
        {

            result = Derivada(x,opf,k);
            printf("\n Derivada = %lf \n", result);
        }

}


    if(op == '2')
    {

        printf("\nDigite o valor de A: ");
            scanf("%lf", &a);
            fflush(stdin);
        printf("\nDigite o valor de B: ");
            scanf("%lf", &b);
            fflush(stdin);

        result = Integral(opf, k, a, b);
        printf("\nIntegral = %lf\n", result);
    }

    if(op == '3')
    {
        printf("\nDigite o valor de X0 in R: ");
            scanf("%lf", &x0);
            fflush(stdin);


        printf("\nEscolha a Função abaixo:\n");
        printf("\n 1 - f(x) = x^2 - 2");
        printf("\n 2 - f(x) = 2x - cos(x)");
        printf("\n 3 - f(x) = x . ln(x) - 1\n");
            scanf("%c", &opf);

    resultzero = Zero(x0,opf);
    printf("\n Solução = %lf\n", resultzero);
    printf("\n Erro = %lf\n", resultzero);
    }

    printf("\nDeseja efetuar outro calculo?\n");
    printf("\nS - Voltar ao menu\n");
    printf("\nN - Sair \n");
    printf("\nEscolha a opcao: ");
    fflush(stdin);
    final = getchar();
    system("cls");

  }while(final == 'N' || final == 'n' && final == 'S' || final == 's');

    return 0;
}
