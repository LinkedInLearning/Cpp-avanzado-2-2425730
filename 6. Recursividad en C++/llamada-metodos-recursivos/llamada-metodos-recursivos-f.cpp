/*
 * Curso: C++ Avanzado 2
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <iostream>
using namespace std;

class Numero{
public:
    Numero(int valor);
    int getValor() const;
    int factorial() const;

private:
    int valor_;
    int factorialRec(int n) const;
};

int main(){

    Numero num(4);
    int resultadoFactorial = num.factorial();

    return 0;
}

int Numero::factorial() const{
    return factorialRec(valor_);
}

int Numero::factorialRec(int n) const{
    if(n<1) return 1;
    else return n*factorialRec(n-1);
}
Numero::Numero(int valor){
    valor_ = valor;
}

int Numero::getValor() const{
    return valor_;
}

