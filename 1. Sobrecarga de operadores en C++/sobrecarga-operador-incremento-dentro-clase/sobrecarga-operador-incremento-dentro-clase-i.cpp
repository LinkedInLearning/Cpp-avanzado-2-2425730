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

private:
    string departamento_;
    float bonus_;
};

int main(){

    return 0;
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