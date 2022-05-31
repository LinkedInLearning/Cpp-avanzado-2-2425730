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
    Impuesto& operator + (const Impuesto &valor);

private:
    float valor_;
};

int main(){

    Impuesto impuesto1(1500), impuesto2(1200);
    Impuesto total = impuesto1 + impuesto2;

    cout << total.getValor();

    return 0;
}

Impuesto::Impuesto(float valor){
    valor_ = valor;
}

Impuesto& Impuesto::operator +(const Impuesto &valor){
    this->valor_ += valor.valor_;
    return *this;
}

/*
Impuesto operator +(const Impuesto &impuesto1, const Impuesto &impuesto2){
    Impuesto impuesto(impuesto1.getValor() + impuesto2.getValor());
    return impuesto;
}
*/

float Impuesto::getValor() const{
    return valor_;
}