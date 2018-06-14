#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include "Derivadas.h"
#include "Integral.h"
#include "Zero.h"

//Fun��o principal
int main()
{
    //setando acentos e linguagem ABNT2 Portugues
    setlocale(LC_ALL, "Portuguese");

    //Declara��o de vari�veis
    int op;
    int opf;
    double k,x;// vari�veis usadas na op��o Derivadas
    double a,b; //vari�veis usadas na op��o Integral
    double x0; //Vari�vel usada na op��o Zero da Fun��o
    double result;
    char final;


    do //Primeira camada de do - while - op��o ap�s realizar fun��o  (final)
    {
        do
        {
            fflush(stdin);
            printf("\n-------- CALCULADORA DE DERIVADAS, INTEGRAIS E ZERO DA FUNCAO ----------\n");
            printf("\n Escolha uma das op��es abaixo: ");
            printf("\n 1 - Derivadas");
            printf("\n 2 - Integral");
            printf("\n 3 - Zero da fun��o.");
            printf("\n 4 - Sair (Encerrar o programa)\n");
            printf("\n Escolha a opcao: ");
            scanf("%d",&op);
            system("cls");
        }
        while(!(op == 1 || op == 2 || op == 3 || op == 4));

        {
            if (op == 4)
            {
                printf("\n-----------------Obrigado por utilizar nossa calculadora! -------------------\n");
                exit(0);
            };
        }



        if (op == 1 || op == 2)
        {
            do
            {
                fflush(stdin);
                printf("\n Escolha a Fun��o abaixo: ");
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
                printf("\n 12 - Voltar ao menu de escolha (Menu inicial ou sair).");
                printf("\n 13 - Encerrar o programa.");
                printf("\n ");
                printf("\nEscolha sua opcao: ");
                scanf(" %d", &opf);
                system("cls");
                fflush(stdin);

                if(opf == 12)
                {
                    main();
                }
                if (opf == 13)
                {
                    printf("\n-----------------Obrigado por utilizar nossa calculadora! -------------------\n");
                    exit(0);
                }


                {

                    if (opf > 13)
                    {

                        printf("\nOp��o inv�lida.\nDigite um valor valido ou aperte 13 para sair!\n");
                    }

                }
            }
            while (opf>13);

        }

        if (op == 1)
        {
            if(opf!=1)
            {
                printf("\n Digite o valor de X: "); //VALIDAR ENTRADA
                scanf("%lf", &x);
                fflush(stdin);
            }

            if(opf == 1 || opf == 2 || opf == 3 || opf == 5)
            {
                printf("\n Digite o valor de K: "); //VALIDAR ENTRADA
                scanf("%lf", &k);
                fflush(stdin);

            }

            result = Derivada(x,opf,k);
            printf("\n Derivada = %.4lf \n", result);
            system("pause");

        }

        if(op == 2)
        {

            printf("\nDigite o valor de A: "); //VALIDAR ENTRADA
            scanf("%lf", &a);
            fflush(stdin);
            printf("\nDigite o valor de B: "); //VALIDAR ENTRADA
            scanf("%lf", &b);
            fflush(stdin);
            if(opf == 1 || opf == 2 || opf == 3 || opf == 5)
            {
                printf("\nDigite o valor de K: "); //VALIDAR ENTRADA
                scanf("%lf", &k);
                fflush(stdin);
            }

            result = Integral(opf, k, a, b);
            printf("\nIntegral = %.4lf\n", result);
            system("pause");
        }

        if(op == 3)
        {

here:
            system("cls");
            printf("\nDigite o valor de X0 in R: ");
            scanf("%lf", &x0); //VALIDAR ENTRADA

            printf("\nEscolha a Fun��o abaixo:\n");
            printf("\n 1 - f(x) = x^2 - 2");
            printf("\n 2 - f(x) = 2x - cos(x)");
            printf("\n 3 - f(x) = x . ln(x) - 1\n");
            printf("\nSua escolha: ");
            scanf("%d", &op);

            if (!(op==1 || op==2 || op==3))//se sim

            {
                fflush(stdin);
                printf("\nOp��o invalida\n");
                system("pause");
                goto here;

            }

            Zero(x0,op);
            system("pause");
        }

here2:
        system("cls");
        printf("\nDeseja reutilizar a calculadora?\n");
        printf("\nS - Para voltar ao menu inicial\n");
        printf("\nN - Para sair \n");
        printf("\nEscolha a opcao: ");
        fflush(stdin);
        final = getchar();
        system("cls");
        if(!(final == 'N' || final == 'n' || final == 'S' || final == 's'))
        {
            printf("Op��o invalida!\n");
            system("pause");
            goto here2;
        }
    }
    while((final == 'S') || (final == 's'));  //fim Do while op��o ap�s realizar c�lculo

    return 0;
}
