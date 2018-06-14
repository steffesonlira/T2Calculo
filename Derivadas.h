//Protótipo
double Derivada (double x, int opf, double k);

//É necessário estar com a biblioteca math no programa
double Derivada (double x, int opf, double k){
double result;
double h = 0.0000000001;

// f(x0) = (f(x+h) - f(x)) / h

switch(opf){

case 1:
    result = ((k+h) - k)/h;
    break;
case 2:
    result = (pow(x+h,k) - pow(x,k) )/ h;
    break;
case 3:
    result = (pow(k,x + h) - pow(k,x) )/ h;
    break;
case 4:
    result = (exp(x+h) - exp(x)) / h;
    break;
case 5:
    result = (log(x+h)/log(k) - log(x)/log(k)) / h;
    break;
case 6:
    result = (log(x+h) - log(x) )/ h;
    break;
case 7:
    result = (sin(x+h) - sin(x) )/ h;
    break;
case 8:
    result = (cos(x+h) - cos(x)) / h;
    break;
case 9:
    result = (tan(x+h) - tan(x)) / h;
    break;
case 10:
    result = (sqrt(x+h) - sqrt(x)) / h;
    break;
case 11:
    result = (1 /(x+h) - 1 /(x)) / h;
    break;
}
return result;
}
