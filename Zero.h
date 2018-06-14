//Protótipo
void Zero (double xz, int op);

void Zero (double xz, int op){
int i;
double result;
double e = pow(10,-6);
double vetorx[55];
double erro;
double h = 0.0000000001;
double derivada;


vetorx[0] = xz;
// f(x0) = (f(x+h) - f(x)) / h

switch(op){

case 1: //f(x) = x^2 - 2
    for(i=0;i<51;i++){
       derivada = (((pow(vetorx[i]+h,2))-2) - (pow(vetorx[i],2)-2) )/ h;
       vetorx[i+1] = vetorx[i] - ((pow(vetorx[i],2) - 2) / derivada );
       erro = (vetorx[i+1] - vetorx[i]) / vetorx[i+1];
       if(erro < 0){
        erro = erro * - 1;
       }
       if(erro<=e) break;
    }
    result = vetorx[i+1];
    break;

case 2: //2x - cos(x)
    for(i=0;i<51;i++){
       derivada = (((2*vetorx[i]+h) - cos(vetorx[i]+h))- (2*vetorx[i] - cos(vetorx[i])))/h;
       vetorx[i+1] = vetorx[i] - ((2*vetorx[i] - cos(vetorx[i])) / derivada );
       erro = (vetorx[i+1] - vetorx[i]) / vetorx[i+1];
       if(erro < 0){
        erro = erro * -1;
       }
       if(erro<=e) break;
    }
    result = vetorx[i+1];
    break;

case 3: //x . ln(x) - 1
    for(i=0;i<51;i++){

       derivada = (((vetorx[i]+h)*log(vetorx[i]+h) -1) - (vetorx[i]*log(vetorx[i]) -1))/h;
       vetorx[i+1] = vetorx[i] - ( (vetorx[i]*log(vetorx[i]) -1)   / derivada );
       erro = (vetorx[i+1] - vetorx[i]) / vetorx[i+1];

       if(erro<0){
        erro = erro * -1;
       }
       if(erro<=e) break;
    }
    result = vetorx[i+1];
    break;
}
    printf("\nSolução = %.4lf",  result);
    printf("\nErro = %.4lf\n", erro);
}
