void maintest(){
double k, a=2, b=3;
double result, h, vetorx[1000], vetorFx[1000],betFx=0; //betFx recebe a soma dos numeros do meio
int n = 1000 , i;
double e = pow(10,-6);
printf("e: %f", e);

h = (b - a) / n;
printf("!!!!H: %f!!!!!!!", h);

for(i=0;i<=n;i++){
    if(i==0){
        vetorx[i] = a;
    }else{
    vetorx[i] = vetorx[i-1] + h;
    }
}
printf("\n!!!!!!!!!!vetX0: %f     vetxn: %f!!!!!!!!",vetorx[0], vetorx[1000]);


//
//case 1:
//    result = 0; //NAO SEI FAZER!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//    break;
//case 2:
//    for(i=0;i<=n;i++){
//      vetorFx[i] = pow (vetorx[i],k);
//    }
//    break;
//case 3:
//    for(i=0;i<=n;i++){
//      vetorFx[i] = pow (k,vetorx[i]);
//    }
//    break;
//case 4:
//    for(i=0;i<=n;i++){
//      vetorFx[i] = exp(vetorx[i]);
//    }
//    break;
//case 5:
//    for(i=0;i<=n;i++){
//      vetorFx[i] = log(vetorx[i])/log(k);
//    }
//    break;
//case 6:
    for(i=0;i<=n;i++){
      vetorFx[i] = log(vetorx[i]);
    }
//    break;
//case 7:
//    for(i=0;i<=n;i++){
//      vetorFx[i] = sin(vetorx[i]);
//    }
//    break;
//case 8:
//    for(i=0;i<=n;i++){
//      vetorFx[i] = cos(vetorx[i]);
//    }
//    break;
//case 9:
//    for(i=0;i<=n;i++){
//      vetorFx[i] = tan(vetorx[i]);
//    }
//    break;
//case 10:
//    for(i=0;i<=n;i++){
//      vetorFx[i] = sqrt(vetorx[i]);
//    }
//    break;
//case 11:
//    for(i=0;i<=n;i++){
//      vetorFx[i] = 1/vetorx[i];
//    }
//    break;
//
for(i=1;i<n;i++){
    betFx += vetorFx[i];
}

result = (h/2)*(vetorFx[0] + 2*betFx + vetorFx[1000]);
printf("\n!!!!!!!!fx0: %f  bet: %f  fxn: %f!!!!!!!!!!", vetorFx[0], betFx, vetorFx[1000]);
printf("\n!!!!!! result: %f!!!!!",result);
}

