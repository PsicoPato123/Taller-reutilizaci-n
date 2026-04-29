#include <iostream>
#include "mates.h"

int main(){
    double x;
    std::cout<<"Ingrese un numero: ";
    std::cin>>x;
    
    std::cout<<"El valor absoluto es: "<<absoluto(x)<<std::endl;
    std::cout<<"La raiz cuadrada es: "<<raiz(x, 10)<<std::endl;
    std::cout<<"El seno es: "<<seno(x)<<std::endl;
    std::cout<<"El coseno es: "<<cos(x)<<std::endl;
    return 0;
}