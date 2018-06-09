#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>



void maintestdois(){
int i,k=0;
double result[2];
double e = pow(10,-6);
double vetorx[55];
double erro;
double h = 0.0000000001;
double derivadaa;
double x0 = 2;

vetorx[0] = x0;
//f(x) = x^2 - 2
 for(i=0;i<51;i++){
       derivadaa = (((pow(vetorx[i]+h,2))-3) - (pow(vetorx[i],2)-3) )/ h;
       vetorx[i+1] = vetorx[i] - ((pow(vetorx[i],2) - 3) / derivadaa );
       erro = (vetorx[i+1] - vetorx[i]) / vetorx[i+1];
       if(erro<0){
        erro = erro * -1;
       }
       k += 1;
       if(erro<=e) break;
    }

    result[1] = vetorx[i+1];
    result[0] = erro;

    printf("!!!!!!!!!Erro: %f !!!!!!!!", result[0]);
    printf("\n!!!!!!!!Solução: %f !!!!!!!!\n", result[1]);



}
