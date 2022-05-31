/*
 * Curso: C++ Avanzado 2
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Empleado{
public:
    Empleado(string nombre, string primerApellido): nombre_(nombre), primerApellido_(primerApellido){};

private:
    string nombre_, primerApellido_;
};

class Supervisor : public Empleado {
public:
    Supervisor(string nombre, string primerApellido): Empleado(nombre, primerApellido){};
private:
    float sueldoAnual;
};

int main(){

    return 0;
}

