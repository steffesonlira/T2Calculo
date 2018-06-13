//Protótipo
double Integral (char opf, double k, double a, double b);

//É necessário estar com a biblioteca math no programa
double Integral (char opf, double k, double a, double b){
double result, h, vetorx[1000], vetorFx[1000],betFx=0; //betFx recebe a soma dos numeros do meio
int n = 1000 , i;

h = (b - a) / n;

for(i=0;i<=n;i++){
    if(i==0){
        vetorx[i] = a;
    }else{
    vetorx[i] = vetorx[i-1] + h;
    }
}

switch(opf){

case '1':
    result = 0; //NAO SEI FAZER!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    break;

case '2':
    for(i=0;i<=n;i++){
      vetorFx[i] = pow (vetorx[i],k);
    }
    break;

case '3':
    for(i=0;i<=n;i++){
      vetorFx[i] = pow (k,vetorx[i]);
    }
    break;

case '4':
    for(i=0;i<=n;i++){
      vetorFx[i] = exp(vetorx[i]);
    }
    break;

case '5':
    for(i=0;i<=n;i++){
      vetorFx[i] = log(vetorx[i])/log(k);
    }
    break;

case '6':
     for(i=0;i<=n;i++){
      vetorFx[i] = log(vetorx[i]);
    }
    break;

case '7':
    for(i=0;i<=n;i++){
      vetorFx[i] = sin(vetorx[i]);
    }
    break;

case '8':
    for(i=0;i<=n;i++){
      vetorFx[i] = cos(vetorx[i]);
    }
    break;

case '9':
    for(i=0;i<=n;i++){
      vetorFx[i] = tan(vetorx[i]);
    }
    break;

case '10':
    for(i=0;i<=n;i++){
      vetorFx[i] = sqrt(vetorx[i]);
    }
    break;

case '11':
    for(i=0;i<=n;i++){
      vetorFx[i] = 1/vetorx[i];
    }
    break;
}

for(i=1;i<n;i++){
    betFx += vetorFx[i];
}

result = (h/2)*(vetorFx[0] + 2*betFx + vetorFx[1000]);

return result;
}
