/*
 * Curso: C++ Avanzado 2
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <iostream>
#include <cstring>
using namespace std;

class Bonificacion{

public:
    Bonificacion(string departamento, float bonus);
    string getDepartamento() const;
    float getBonus() const;
    float operator ++();

private:
    string departamento_;
    float bonus_;
};

int main(){

    Bonificacion departamento("Ventas", 500);
    ++departamento;

    cout << endl;
    cout << "El departamento " << departamento.getDepartamento() << " obtendrá una bonificación total de " << departamento.getBonus() << endl;
    cout << endl;

    return 0;
}

float Bonificacion::operator ++(){
    bonus_ = bonus_ + 1000;
    return bonus_;
}

Bonificacion::Bonificacion(string departamento, float bonus){
    departamento_ = departamento;
    bonus_ = bonus;
}

string Bonificacion::getDepartamento() const{
    return departamento_;
}

float Bonificacion::getBonus() const{
    return bonus_;
}