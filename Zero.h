//Protótipo
double * Zero (double xz, char opt);

double * Zero (double xz, char opt){
int i,k=0;
double result[2];
double e = pow(10,-6);
double vetorx[55];
double erro;
double h = 0.0000000001;
double derivada;


vetorx[0] = xz;
// f(x0) = (f(x+h) - f(x)) / h

switch(opt){

case '1': //f(x) = x^2 - 2
    for(i=0;i<51;i++){
       derivada = (((pow(vetorx[i]+h,2))-2) - (pow(vetorx[i],2)-2) )/ h;
       vetorx[i+1] = vetorx[i] - ((pow(vetorx[i],2) - 2) / derivada );
       erro = (vetorx[i+1] - vetorx[i]) / vetorx[i+1];
       if(erro<0){
        erro = erro * -1;
       }
       k++;
       if(erro<=e) break;
    }
    result[0] = erro;
    result[1] = vetorx[k];
    break;

case '2': //2x - cos(x)
    for(i=0;i<51;i++){
       derivada = (((2*vetorx[i]+h) - cos(vetorx[i]+h))- (2*vetorx[i] - cos(vetorx[i])))/h;
       vetorx[i+1] = vetorx[i] - ((2*vetorx[i] - cos(vetorx[i])) / derivada );
       erro = (vetorx[i+1] - vetorx[i]) / vetorx[i+1];
       if(erro<0){
        erro = erro * -1;
       }
       k++;
       if(erro<=e) break;
    }
    result[0] = erro;
    result[1] = vetorx[k];
    break;

case '3': //x . ln(x) - 1
    for(i=0;i<51;i++){

       derivada = (((vetorx[i]+h)*log(vetorx[i]+h) -1) - (vetorx[i]*log(vetorx[i]) -1))/h;
       vetorx[i+1] = vetorx[i] - ( (vetorx[i]*log(vetorx[i]) -1)   / derivada );
       erro = (vetorx[i+1] - vetorx[i]) / vetorx[i+1];

       if(erro<0){
        erro = erro * -1;
       }
       k++;
       if(erro<=e) break;
    }
   result[0] = erro;
   result[1] = vetorx[k];
    break;
}
return result;
}

