/*
 * Curso: C++ Avanzado 2
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <iostream>
using namespace std;

class Impuesto{
public:
    Impuesto(float valor);
    float getValor() const;

private:
    float valor_;
};

int main(){

    Impuesto impuesto1(1500), impuesto2(1200);
    Impuesto total = impuesto1 + impuesto2;

    // cout << endl;
    // cout << total.getValor() << endl;

    return 0;
}

Impuesto::Impuesto(float valor){
    valor_ = valor;
}

float Impuesto::getValor() const{
    return valor_;
}