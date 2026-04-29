#include "mates.h"

double absoluto (double x){
    return (x<0)? x*-1:x;
}
double raiz (int x, int y){
    if (x<0) return -1;
    double t=x;
    double error = 1e-6;
    for (int i=0; i<y;i++){
        x = (x+t/x)/2;
    }
    return x; 
}
double exponencial (double x){
    double suma=1;
    double termino=1;

    for (int i=1; i<10; i++){
        termino *= x/i;
        suma += termino;
    } 
    return suma;
}

double normalizar (double x){
    while (x>PI) x-= 2*PI;
    while (x<-PI) x+=2*PI;
    return x;
}
double seno(double x){
    x = normalizar (x);
    double suma=x;
    double termino=x; 
    for (int i=1; i<10; i++){
        termino *= -1 *x * x / ((2*i)*(2*i+1));
        suma += termino;
    } 
    return suma;
}
double cos(double x){
    x = normalizar (x);
    double suma=1;
    double termino=1; 
    for (int i=1; i<10; i++){
        termino *= -1 *x * x / ((2*i-1)*(2*i-1));
        suma += termino;
    } 
    return suma;
}