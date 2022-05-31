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
    Impuesto suma(const Impuesto &valor);
    float getValor() const;

private:
    float valor_;
};

int main(){

    return 0;
}

Impuesto::Impuesto(float valor){
    valor_ = valor;
}

Impuesto Impuesto::suma(const Impuesto &valor){
    return Impuesto(valor_ + valor.valor_);
}

float Impuesto::getValor() const{
    return valor_;
}