/*
 * Curso: C++ Avanzado 2
 * Plataforma: LinkedIn Learning
 * Instructor: @EliezerLopez
 * */

#include <iostream>
#include <cstring>
using namespace std;

class Empleado {
public:
    Empleado(string _nombre, string _primerApellido);
private:
    string nombre, primerApellido;
    float sueldoAnual;
};

class Supervisor {
public:
    Supervisor(string _nombre, string _primerApellido);
private:
    string nombre, primerApellido;
    float sueldoAnual;
};

int main(){

    return 0;
}