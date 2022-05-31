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
    Impuesto operator + (const Impuesto &valor);
    float getValor() const;

private:
    float valor_;
};

int main(){

    Impuesto impuesto1(1200), impuesto2(1500);
    Impuesto total = impuesto1 + impuesto2;

    cout << total.getValor() << endl;

    return 0;
}

Impuesto::Impuesto(float valor){
    valor_ = valor;
}

Impuesto Impuesto::suma(const Impuesto &valor){
    return Impuesto(valor_ + valor.valor_);
}

Impuesto Impuesto::operator +(const Impuesto &valor){
    return Impuesto(valor_ + valor.valor_);
}

float Impuesto::getValor() const{
    return valor_;
}