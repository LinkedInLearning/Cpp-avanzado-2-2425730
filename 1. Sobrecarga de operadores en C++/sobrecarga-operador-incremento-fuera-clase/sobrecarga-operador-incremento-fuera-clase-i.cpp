/*
 * Curso: C++ Avanzado 2
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <iostream>
#include <cstring>
using namespace std;

class Empleado{

public:
    Empleado(string nombre, string apellido1);
    string getNombre() const;
    string getPrimerApellido() const;

private:
    string nombre_, apellido1_;
};

int main(){

    Empleado actual("Eliezer", "Lopez");

    cout << "Hola mundo!" << endl;

    return 0;
}

Empleado::Empleado(string nombre, string apellido1){
    nombre_ = nombre;
    apellido1_ = apellido1;
}

string Empleado::getNombre() const{
    return nombre_;
}

string Empleado::getPrimerApellido() const{
    return apellido1_;
}